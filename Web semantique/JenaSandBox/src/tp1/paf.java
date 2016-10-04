package tp1;

import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;

import org.apache.jena.rdf.model.Bag;
import org.apache.jena.rdf.model.Model;
import org.apache.jena.rdf.model.ModelFactory;
import org.apache.jena.rdf.model.NodeIterator;
import org.apache.jena.rdf.model.Property;
import org.apache.jena.rdf.model.RDFNode;
import org.apache.jena.rdf.model.ResIterator;
import org.apache.jena.rdf.model.Resource;
import org.apache.jena.rdf.model.SimpleSelector;
import org.apache.jena.rdf.model.Statement;
import org.apache.jena.rdf.model.StmtIterator;
import org.apache.jena.util.FileManager;
import org.apache.jena.vocabulary.RDFS;
import org.apache.jena.vocabulary.VCARD;


/** Tutorial 1 creating a simple model
 */

public class paf {
	static final String inputFileName = "src/tp1/vc-db-1.rdf";
    
	public static void main (String args[]) {
		
		Model model = ModelFactory.createDefaultModel();
		
		// create the resource
		Resource r = model.createResource();                                     
		
		// add the property
		r.addProperty(RDFS.label, model.createLiteral("chat", "en"))
		 .addProperty(RDFS.label, model.createLiteral("chat", "fr"))
		 .addProperty(RDFS.label, model.createLiteral("<em>chat</em>", true));
		  
		// write out the graph
		model.write(new PrintWriter(System.out));
		System.out.println();
		  
		// create an empty graph
		model = ModelFactory.createDefaultModel();
		
		// create the resource
		r = model.createResource();                                     
		
		// add the property
		r.addProperty(RDFS.label, "11").addLiteral(RDFS.label, 11);
		
		// write out the graph
		model.write( System.out, "N-TRIPLE");
	}
}
