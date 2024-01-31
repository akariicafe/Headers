@class NSMutableArray, PKBarcodeStickerView, UIButton, UIImageView, UILabel, PKBackdropView, UIView;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {
    UILabel *_balanceLabel;
    UIView *_scrimView;
    PKBackdropView *_backdropView;
    PKBarcodeStickerView *_topBarcodeView;
    PKBarcodeStickerView *_bottomBarcodeView;
    NSMutableArray *_oldTopBarcodeViews;
    NSMutableArray *_oldBottomBarcodeViews;
    UIButton *_fullScreenButton;
    UIImageView *_compactBankLogoView;
    BOOL _accountIsActive;
    BOOL _accountSupportsTopUp;
}

- (void)dealloc;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleAccountChanged:(id)a0;
- (double)_barcodePadding;
- (struct CGSize { double x0; double x1; })_barcodeSize;
- (id)_filterAuxiliaryField:(id)a0;
- (id)_filterSecondaryField:(id)a0;
- (void)_handlePeerPaymentAccountChanged:(id)a0;
- (void)_initializeBalanceLabelWithTextColor:(id)a0;
- (void)_showFullScreenBarcodeForButton:(id)a0;
- (void)_updateAccountBalanceVisibilityAnimated:(BOOL)a0;
- (void)_updateBalanceLabelFontSize;
- (void)_updateBalanceWithAmount:(id)a0;
- (void)_updateStateForAccount:(id)a0 animated:(BOOL)a1;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)setDynamicBarcodeData:(id)a0;
- (void)setModallyPresented:(BOOL)a0;
- (void)setShowsLiveBalance:(BOOL)a0;
- (void)setViewExpanded:(BOOL)a0;
- (BOOL)showsShare;
- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)a0;

@end
