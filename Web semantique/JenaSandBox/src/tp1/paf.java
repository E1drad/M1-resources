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
	static final String inputFileName1 = "src/tp1/vc-db-1.rdf";
	static final String inputFileName2 = "src/tp1/vc-db-2.rdf";
    
	public static void main (String args[]) {

		Model model1 = ModelFactory.createDefaultModel();
		Model model2 = ModelFactory.createDefaultModel();
		InputStream in1 = FileManager.get().open(inputFileName2);		
		if (in1 == null) {
            throw new IllegalArgumentException( "File: " + inputFileName1 + " not found");
        }
        InputStream in2 = FileManager.get().open(inputFileName2);
        if (in2 == null) {
            throw new IllegalArgumentException( "File: " + inputFileName2 + " not found");
        }
		// lit les fichiers RDF/XML
		model1.read(new InputStreamReader(in1), "");

		model2.read(new InputStreamReader(in2), "");

		// fusionne les modèles
		Model model = model1.union(model2);

		// affiche le modèle comme RDF/XML
		model.write(System.out, "RDF/XML-ABBREV");
	}
}
