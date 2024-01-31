@class NSArray, PFMessagesStackLayoutFrameSolver;

@interface CKStaticImageStackView : UIView

@property (retain, nonatomic) NSArray *mediaObjects;
@property (retain, nonatomic) NSArray *imageLayers;
@property (retain, nonatomic) PFMessagesStackLayoutFrameSolver *frameSolver;
@property (nonatomic) double stackCornerRadius;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updatePreviews;
- (Class)_PFMessageStackLayoutFrameSolverClass;
- (void)_mediaObjectPreviewDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaObjects:(id)a1;

@end
