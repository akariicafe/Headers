@class NSString, NSXMLParser;

@interface OZTemplateFlagXMLParser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    BOOL _foundTemplate;
    BOOL _foundTemplateFlag;
    BOOL _success;
}

@property (readonly, nonatomic) unsigned int templeFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)parse;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;

@end
