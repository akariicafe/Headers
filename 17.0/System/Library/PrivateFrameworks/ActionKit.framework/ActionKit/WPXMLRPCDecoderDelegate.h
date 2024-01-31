@class NSString, NSMutableArray;

@interface WPXMLRPCDecoderDelegate : NSObject <NSXMLParserDelegate> {
    WPXMLRPCDecoderDelegate *myParent;
    NSMutableArray *myChildren;
    int myElementType;
    NSString *myElementKey;
    id myElementValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setParent:(id)a0;
- (id)parent;
- (id)elementValue;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)parseData:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (id)parseString:(id)a0;
- (id)initWithParent:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)setElementValue:(id)a0;
- (int)elementType;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)setElementType:(int)a0;
- (id)elementKey;
- (void)setElementKey:(id)a0;
- (id)parseDate:(id)a0;
- (void)addElementValueToParent;
- (BOOL)isDictionaryElementType:(int)a0;
- (id)parseBoolean:(id)a0;
- (id)parseDateString:(id)a0 withFormat:(id)a1;
- (id)parseDouble:(id)a0;
- (id)parseInteger:(id)a0;

@end
