@class PKPaymentHeroImageController, NSString, UIImageView, NSMutableDictionary, UIView, NSMutableArray, PKImageSequenceView;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {
    long long _context;
    struct CGSize { double width; double height; } _aspectSize;
    BOOL _imageDownloadFailed;
    UIView *_backgroundView;
    UIView *_bottomDividerView;
    UIView *_heroDeviceView;
    PKImageSequenceView *_cardCarouselView;
    PKPaymentHeroImageController *_heroImageController;
    UIImageView *_faceIDGlyphView;
    NSMutableArray *_heroImageIdentifiers;
    NSMutableDictionary *_heroImagesDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetBackgroundColor;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)heroImageController:(id)a0 didFinishDownloadingImageData:(id)a1 forImage:(id)a2 error:(id)a3;
- (void)_createSubviews;
- (double)_instructionFontSizeForContext:(long long)a0;
- (void)_configureHeroCardsFromHeroImages:(id)a0;
- (id)_heroImages;
- (BOOL)_isSmallPhone;
- (void)_layoutBottomDividerViewForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutCardCarouselWithAlignment:(struct { unsigned int x0; unsigned int x1; })a0;
- (double)_phoneCardHeightInset;
- (double)_phoneTopPadding;
- (struct CGSize { double x0; double x1; })_watchCardCarouselSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContext:(long long)a0 heroImageController:(id)a1 heroImages:(id)a2;
- (id)initWithContext:(long long)a0 heroImageController:(id)a1 heroImages:(id)a2 product:(id)a3;
- (id)pk_childrenForAppearance;

@end
