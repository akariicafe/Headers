@class UIImage, NSIndexPath, NSString;

@interface ICDocCamRetakeTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIImage *retakeImage;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 indexPath:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
- (id)makeUIImageFromCIImage:(id)a0;

@end
