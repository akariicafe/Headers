@class PKBarcodeStickerView, PKLinkedAppIconView, UILabel, UIView;

@interface PKPassFrontFaceView : PKPassFaceView {
    UILabel *_logoLabel;
    PKBarcodeStickerView *_barcodeView;
    UIView *_bottomRightItemView;
}

@property (readonly, nonatomic) PKBarcodeStickerView *barcodeView;
@property (nonatomic) BOOL showsLinkedApp;
@property (nonatomic) long long bottomRightItem;
@property (nonatomic) BOOL showsBarcodeView;
@property (nonatomic) BOOL showsLiveBalance;
@property (readonly, nonatomic) PKLinkedAppIconView *linkedApp;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_positionBarcodeView;
- (id)_rebucketAuxiliaryFields:(id)a0;
- (id)_relevantBuckets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barcodeFrame;
- (void)createBodyContentViews;
- (id)createContactlessLogoView;
- (id)createExpiredLabel;
- (void)createHeaderContentViews;
- (id)headerTemplate;
- (void)insertContentView:(id)a0 ofType:(long long)a1;
- (id)passFaceTemplate;
- (void)setShowsBarcodeView:(BOOL)a0 animated:(BOOL)a1;
- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)a0;
- (void)updateValidity;

@end
