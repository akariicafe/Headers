@class NSArray, NSMutableString, NSString, KSHTMLWriter, NSXMLParser;

@interface ENMLUtility : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSMutableString *outputHTML;
@property (retain, nonatomic) KSHTMLWriter *htmlWriter;
@property (retain, nonatomic) NSArray *resources;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSXMLParser *xmlParser;
@property (nonatomic) BOOL shouldIgnoreNextEndElement;
@property (nonatomic) BOOL shouldInlineResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaTagWithDataHash:(id)a0 mime:(id)a1;

- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 foundComment:(id)a1;
- (void)convertENMLToHTML:(id)a0 completionBlock:(id /* block */)a1;
- (void)convertENMLToHTML:(id)a0 withInlinedResources:(id)a1 completionBlock:(id /* block */)a2;
- (void)convertENMLToHTML:(id)a0 withReferencedResources:(id)a1 completionBlock:(id /* block */)a2;
- (void)convertENMLToHTML:(id)a0 withResources:(id)a1 inlineResources:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)generateHTMLFromENML:(id)a0 completion:(id /* block */)a1;
- (void)generateHTMLFromENML:(id)a0 inlinedResources:(id)a1 completion:(id /* block */)a2;
- (void)generateHTMLFromENML:(id)a0 referencedResources:(id)a1 completion:(id /* block */)a2;
- (void)writeImageTagForResource:(id)a0 withAttributes:(id)a1;
- (void)writeResource:(id)a0 withAttributes:(id)a1;
- (void)writeTodoWithAttributes:(id)a0;

@end
