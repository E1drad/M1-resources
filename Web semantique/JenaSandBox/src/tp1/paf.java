package tp1;

import java.io.InputStream;

import org.apache.jena.rdf.model.Model;
import org.apache.jena.rdf.model.ModelFactory;
import org.apache.jena.rdf.model.Property;
import org.apache.jena.rdf.model.RDFNode;
import org.apache.jena.rdf.model.Resource;
import org.apache.jena.rdf.model.Statement;
import org.apache.jena.rdf.model.StmtIterator;
import org.apache.jena.util.FileManager;
import org.apache.jena.vocabulary.VCARD;


/** Tutorial 1 creating a simple model
 */

public class paf {
	static final String inputFileName = "src/tp1/vc-db-1.rdf";
	
	public static void main (String args[]) {
		// créer un modèle vide
		Model model = ModelFactory.createDefaultModel();
		
		// utiliser le FileManager pour trouver le fichier d'entrée
		InputStream in = FileManager.get().open( inputFileName );
		if (in == null) {
			throw new IllegalArgumentException("Fichier: " + inputFileName + " non trouvé");
		}
		// lire le fichier RDF/XML
		model.read(in, null);
		
		// l'écrire sur la sortie standard
		model.write(System.out);
	}
}
