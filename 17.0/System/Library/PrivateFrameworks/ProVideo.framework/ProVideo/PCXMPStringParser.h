@class NSString, NSMutableString, NSMutableDictionary, NSArray;

@interface PCXMPStringParser : NSObject <NSXMLParserDelegate> {
    NSMutableString *tagParent1;
    NSMutableString *tagParent2;
    NSMutableString *tagParent3;
    NSMutableString *valueString;
    NSMutableDictionary *tagDict1;
    NSMutableDictionary *tagDict2;
    NSMutableDictionary *tagDict3;
    NSMutableDictionary *mDict;
    NSString *xmlError;
    NSArray *parentTags1;
    NSArray *parentTags2;
    NSArray *parentTags3;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidStartDocument:(id)a0;
- (void)parseXMPString:(id)a0;
- (id)parseErrorString;
- (void)parseXMPData:(id)a0;
- (id)parsedData;

@end
