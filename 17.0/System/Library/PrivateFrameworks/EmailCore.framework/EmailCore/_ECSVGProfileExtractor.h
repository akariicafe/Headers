@class NSString, NSConditionLock, NSXMLParser;

@interface _ECSVGProfileExtractor : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    NSString *_namespace;
    NSString *_version;
    NSString *_baseProfile;
    _Atomic BOOL _hasParsed;
    NSConditionLock *_parseLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void).cxx_destruct;
- (void)_parseIfNeeded;

@end
