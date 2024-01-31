@interface DOMImplementation : DOMObject

- (void)dealloc;
- (id)createCSSStyleSheet:(id)a0 :(id)a1;
- (id)createCSSStyleSheet:(id)a0 media:(id)a1;
- (id)createDocument:(id)a0 :(id)a1 :(id)a2;
- (id)createDocument:(id)a0 qualifiedName:(id)a1 doctype:(id)a2;
- (id)createDocumentType:(id)a0 :(id)a1 :(id)a2;
- (id)createDocumentType:(id)a0 publicId:(id)a1 systemId:(id)a2;
- (id)createHTMLDocument:(id)a0;
- (BOOL)hasFeature:(id)a0 :(id)a1;
- (BOOL)hasFeature:(id)a0 version:(id)a1;

@end
