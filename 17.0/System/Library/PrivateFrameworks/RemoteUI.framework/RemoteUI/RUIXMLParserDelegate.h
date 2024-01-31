@class NSArray;

@interface RUIXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ root;
    void /* unknown type, empty encoding */ stack;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ xmlElement;
@property (nonatomic, copy) NSArray *stack;

- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)initWithRoot:(id)a0;

@end
