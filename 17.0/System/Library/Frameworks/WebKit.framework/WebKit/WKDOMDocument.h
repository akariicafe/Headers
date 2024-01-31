@class WKDOMElement;

@interface WKDOMDocument : WKDOMNode

@property (readonly) WKDOMElement *body;

- (id)createElement:(id)a0;
- (id)createTextNode:(id)a0;
- (id)createDocumentFragmentWithText:(id)a0;
- (id)createDocumentFragmentWithMarkupString:(id)a0 baseURL:(id)a1;
- (id)parserYieldToken;

@end
