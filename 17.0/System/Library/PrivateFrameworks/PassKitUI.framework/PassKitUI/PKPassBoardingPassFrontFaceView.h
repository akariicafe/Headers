@class UIImageView;

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView {
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_transitGlyphForTransitType:(long long)a0;
- (void)createBodyContentViews;
- (void)setShowsBarcodeView:(BOOL)a0 animated:(BOOL)a1;
- (id)templateForLayoutMode:(long long)a0;

@end
