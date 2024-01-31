@class NSString, NSMutableDictionary, NSXMLParser;

@interface TBXMLHelper : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    BOOL _interested;
    BOOL _successfullyEndedParsing;
    NSString *_key;
    int _depth;
}

@property (readonly, nonatomic) NSMutableDictionary *sceneSettings;
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
