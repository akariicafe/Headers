@class AVTUINSURL, UIImage, NSURL;

@interface AVTStickerResource : NSObject <AVTCachedResource, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVTUINSURL *internalURL;
@property (nonatomic, getter=isPrereleaseSticker) BOOL prereleaseSticker;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 URL:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
