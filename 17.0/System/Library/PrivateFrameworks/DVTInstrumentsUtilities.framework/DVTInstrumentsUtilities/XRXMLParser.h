@class NSString, XRXMLElementParser, NSXMLParser;
@protocol XRIssueResponder, XRXMLParserDelegate;

@interface XRXMLParser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    XRXMLElementParser *_workingElement;
    XRXMLElementParser *_topLevelElementParser;
    BOOL _delegateWantsFinishedCB;
}

@property (weak, nonatomic) id<XRXMLParserDelegate> delegate;
@property (retain, nonatomic) id<XRIssueResponder> issueResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonXMLSchemaRepositoryURL;
+ (BOOL)parseStream:(id)a0 topLevelParser:(id)a1 delegate:(id)a2;

- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (BOOL)parseData:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)finishedParsing;
- (id)initWithTopLevelParser:(id)a0;

@end
