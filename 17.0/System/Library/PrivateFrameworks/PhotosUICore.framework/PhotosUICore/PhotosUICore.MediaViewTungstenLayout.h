@interface PhotosUICore.MediaViewTungstenLayout : PXGAbsoluteCompositeLayout <PXGLayoutVisibleRectDelegate> {
    void /* unknown type, empty encoding */ updater;
    void /* unknown type, empty encoding */ scrollLayout;
    void /* unknown type, empty encoding */ scrollLayoutObservation;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ contentLayoutIndex;
    void /* unknown type, empty encoding */ scrollLayoutIndex;
}

@property (nonatomic, readonly) BOOL canHandleVisibleRectRejection;

- (id)init;
- (void)update;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (void)referenceSizeDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateGeometry;

@end
