@class NSString, UIImageView, UIView, ICDocCamImageQuad;

@interface ICDocCamViewControllerMeshTransform : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIView *scrimView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewViewFrame;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad;
@property (copy, nonatomic) id /* block */ imageMeshAnimationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)hide;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForImageInImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageMeshTransformWithImageQuad:(id)a0 imageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 previewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finalTransform:(BOOL)a3;
- (id)initWithImage:(id)a0 backgroundImage:(id)a1 imageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 view:(id)a3 imageQuad:(id)a4 previewView:(id)a5 previewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 scrimView:(id)a7;

@end
