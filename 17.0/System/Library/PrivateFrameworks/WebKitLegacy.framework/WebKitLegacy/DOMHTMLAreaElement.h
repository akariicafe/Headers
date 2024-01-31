@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property BOOL noHref;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (copy) NSString *accessKey;
@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *href;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *search;
@property (readonly, copy) NSString *hashName;

- (id)ping;
- (id)origin;
- (id)rel;
- (void)setRel:(id)a0;
- (id)absoluteQuadsWithOwner:(id)a0;
- (id)relList;
- (struct _WKQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })absoluteQuadWithOwner:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxWithOwner:(id)a0;
- (id)boundingBoxesWithOwner:(id)a0;
- (void)setPing:(id)a0;

@end
