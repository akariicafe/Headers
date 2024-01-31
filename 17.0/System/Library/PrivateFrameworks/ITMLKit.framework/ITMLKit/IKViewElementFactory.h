@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject {
    struct { unsigned char sparse : 1; unsigned char parsingUpdatedTree : 1; unsigned char parsingReorderedSiblings : 1; unsigned char parsingPartOfPrototype : 1; } _parsingFlags;
    IKViewElementRegistry *_elementRegistry;
}

@property (nonatomic, getter=isSparse) BOOL sparse;
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory;

+ (void)initialize;
+ (void)registerClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2;
+ (Class)elementClassByTagName:(id)a0;
+ (BOOL)elementsForDocumentElement:(id)a0 context:(id)a1;
+ (BOOL)isDependentByTagName:(id)a0;
+ (void)registerClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2 dependent:(BOOL)a3;

- (void).cxx_destruct;
- (id)elementForDOMElement:(id)a0 parent:(id)a1;
- (Class)elementClassByTagName:(id)a0;
- (unsigned long long)elementTypeByTagName:(id)a0;
- (id)initWithElementRegistry:(id)a0;

@end
