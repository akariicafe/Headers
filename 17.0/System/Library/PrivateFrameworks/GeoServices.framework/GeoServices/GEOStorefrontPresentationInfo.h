@class NSURL, GEOStorefrontView;

@interface GEOStorefrontPresentationInfo : NSObject

@property (readonly, nonatomic) GEOStorefrontView *closeUpView;
@property (readonly, nonatomic) GEOStorefrontView *standOffView;
@property (readonly, nonatomic) NSURL *overlayImageURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStorefrontPresentation:(id)a0;

@end
