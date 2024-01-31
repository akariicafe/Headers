@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
}

@property (retain, nonatomic) SUPlayerStatus *previewStatus;

- (void)dealloc;
- (void)_destroyPreviewProgressView;
- (void)_flipFromPreviewProgressView;
- (void)_flipToPreviewProgressView;
- (void)setPreviewStatus:(id)a0 animated:(BOOL)a1;

@end
