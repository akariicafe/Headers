@class NSString, UIWebView, UIImage, DOMElement;

@interface SUDOMElement : NSObject {
    UIImage *_image;
}

@property (readonly, nonatomic) DOMElement *element;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) UIImage *imageRepresentation;
@property (readonly, nonatomic) NSString *innerText;
@property (retain, nonatomic) UIWebView *webView;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDOMElement:(id)a0;

- (void)dealloc;
- (void)setProperty:(id)a0 value:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frame;
- (id)initWithDOMElement:(id)a0;
- (id)newImageView;
- (id)newLabelForElementWithText:(id)a0;

@end
