@interface StickersUI.StickerCollectionStickerCell : UICollectionViewCell <STKMSStickerViewDelegate> {
    void /* unknown type, empty encoding */ stickerIdentifier;
    void /* unknown type, empty encoding */ msSticker;
    void /* unknown type, empty encoding */ stickerScoreDefaultAnimatedThreshold;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isArranging;
    void /* unknown type, empty encoding */ isStickerHidden;
    void /* unknown type, empty encoding */ isStickerEffectPaused;
    void /* unknown type, empty encoding */ stickerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rearrangingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteButton;
}

@property (nonatomic, readonly) BOOL canHandleTap;

- (void)handleWillDrag:(id)a0;
- (void)handleLongPress:(id)a0 recognizer:(id)a1;
- (void)handleTap:(id)a0 recognizer:(id)a1;
- (void)handleWillTap:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (void)handleDelete:(id)a0;

@end
