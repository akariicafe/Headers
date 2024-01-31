@class LPWebLinkPresentationProperties;

@interface CKWalletItemBalloonView : CKLinkBalloonView {
    BOOL _pendingPropertyChange;
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;

- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)setIsIrisAsset:(BOOL)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (BOOL)isIrisAsset;

@end
