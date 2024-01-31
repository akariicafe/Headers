@class NSString, NSTimer, CKFullScreenEffect, CKMomentCollectionViewCell, CKFullScreenEffectManager, UIView;
@protocol CKEffectPreviewCollectionViewControllerDelegate;

@interface CKEffectPreviewCollectionViewController : UIViewController

@property (retain, nonatomic) CKFullScreenEffectManager *fsem;
@property (weak, nonatomic) CKFullScreenEffect *currentEffect;
@property (retain, nonatomic) CKMomentCollectionViewCell *currentCell;
@property (retain, nonatomic) NSString *resizingSavedIdentifier;
@property (nonatomic) BOOL hideEffects;
@property (retain, nonatomic) UIView *cellWrapper;
@property (weak, nonatomic) id<CKEffectPreviewCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) NSTimer *animationTimer;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)addAnimationTimerForCell:(id)a0;
- (void)displayEffectWithIdentifier:(id)a0;
- (void)resumeEffect;

@end
