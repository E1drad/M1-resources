package tp1;

import org.apache.jena.rdf.model.Model;
import org.apache.jena.rdf.model.ModelFactory;
import org.apache.jena.rdf.model.Property;
import org.apache.jena.rdf.model.RDFNode;
import org.apache.jena.rdf.model.Resource;
import org.apache.jena.rdf.model.Statement;
import org.apache.jena.rdf.model.StmtIterator;
import org.apache.jena.vocabulary.VCARD;


/** Tutorial 1 creating a simple model
 */

public class paf {
	// some definitions
	static String personURI    = "http://somewhere/JohnSmith";
	static String fullName     = "John Smith";

	public static void main (String args[]) {
		// create an empty model
		Model model = ModelFactory.createDefaultModel();
		
		//quelques définitions
		String personURI = "http://somewhere/JohnSmith";
		String givenName = "John";
		String familyName = "Smith";
		String fullName = givenName + " " + familyName;
		
		//créer la ressource
		//et ajouter des propriétés en cascade
		Resource johnSmith
			= model.createResource(personURI)
				.addProperty(VCARD.FN, fullName)
				.addProperty(VCARD.N,
						model.createResource()
							.addProperty(VCARD.Given, givenName)
							.addProperty(VCARD.Family, familyName));
		
		// add the property
		johnSmith.addProperty(VCARD.FN, fullName);
		// On écrit maintenant le modèle en N-Triples dans un fichier
		model.write(System.out, "N-TRIPLE");
	}
}
