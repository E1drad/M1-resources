package tp1;

import java.io.InputStream;
import java.io.InputStreamReader;

import org.apache.jena.rdf.model.Model;
import org.apache.jena.rdf.model.ModelFactory;
import org.apache.jena.rdf.model.Property;
import org.apache.jena.rdf.model.RDFNode;
import org.apache.jena.rdf.model.ResIterator;
import org.apache.jena.rdf.model.Resource;
import org.apache.jena.rdf.model.Statement;
import org.apache.jena.rdf.model.StmtIterator;
import org.apache.jena.util.FileManager;
import org.apache.jena.vocabulary.VCARD;


/** Tutorial 1 creating a simple model
 */

public class paf {
	static final String inputFileName = "src/tp1/vc-db-1.rdf";
	static final String johnSmithURI = "http://somewhere/JohnSmith/";
    
	public static void main (String args[]) {
		// create an empty model
		Model model = ModelFactory.createDefaultModel();

		InputStream in = FileManager.get().open(inputFileName);
		if (in == null) {
			throw new IllegalArgumentException( "File: " + inputFileName + " not found");
		}
		
		// read the RDF/XML file
		model.read( in, "");
		// select all the resources with a VCARD.FN property
		ResIterator iter = model.listResourcesWithProperty(VCARD.FN);
		if (iter.hasNext()) {
			System.out.println("The database contains vcards for:");
			while (iter.hasNext()) {
				System.out.println("  " + iter.nextResource().getRequiredProperty(VCARD.FN).getString() );
			}
		}else{
		    System.out.println("No vcards were found in the database");
		}
	}
}
