@class NSString, QLItem, NSOperationQueue, NSLayoutConstraint, ASVThumbnailButton, QLItemThumbnailGenerator;
@protocol ASVThumbnailViewDelegate;

@interface ASVThumbnailView : UIView <QLPreviewControllerDelegate> {
    ASVThumbnailButton *_button;
    QLItemThumbnailGenerator *_thumbnailGenerator;
    NSOperationQueue *_operationQueue;
    struct CGSize { double width; double height; } _lastRequestedThumbnailSize;
    double _lastRequestedThumbnailScale;
    NSLayoutConstraint *_widthButtonConstraint;
    NSLayoutConstraint *_heightButtonConstraint;
}

@property (weak, nonatomic) id<ASVThumbnailViewDelegate> delegate;
@property (retain, nonatomic) QLItem *thumbnailItem;
@property (nonatomic) struct CGSize { double width; double height; } maxThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)previewCurrentItem;
- (void)updateThumbnailIfNeeded;

@end
