@class NSString, NSArray, PKPaymentHeroImageManifest, PKPaymentWebService;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject {
    PKPaymentWebService *_webService;
}

@property (copy, nonatomic) NSString *primaryImageIdentifier;
@property (copy, nonatomic) NSArray *featuredImages;
@property (readonly, nonatomic) PKPaymentHeroImageManifest *manifest;
@property (weak, nonatomic) id<PKPaymentHeroImageControllerDelegate> delegate;
@property (nonatomic) long long watchSize;

+ (double)cardAspectRatio;
+ (struct CGSize { double x0; double x1; })cardArtSizeForWatchViewSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultImages;

- (void).cxx_destruct;
- (void)downloadImages:(id)a0;
- (struct CGSize { double x0; double x1; })cardArtSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)featuredDefaultImages;
- (id)featuredImageIdentifiers;
- (id)filterImages:(id)a0;
- (id)initWithManifest:(id)a0 webService:(id)a1;

@end
