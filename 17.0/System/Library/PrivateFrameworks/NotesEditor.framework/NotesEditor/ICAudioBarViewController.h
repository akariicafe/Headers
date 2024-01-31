@class ICNote, UIViewController, UIButton;
@protocol ICAudioBarViewControllerDelegate;

@interface ICAudioBarViewController : UIViewController

@property (weak, nonatomic) UIViewController *addedToViewController;
@property (nonatomic) double height;
@property (weak, nonatomic) id<ICAudioBarViewControllerDelegate> delegate;
@property (weak, nonatomic) ICNote *note;
@property (readonly, nonatomic) UIButton *doneButton;

- (void)done:(id)a0;
- (void)dealloc;
- (double)height;
- (void)setHeight:(double)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)addConstraintsInSuperview:(id)a0;
- (void)addToViewController:(id)a0;
- (void)adjustTextViewContentInsetWhenAddingView:(BOOL)a0;
- (BOOL)hasTranslucentNavigationBar;
- (void)noteWillBeDeletedNotification:(id)a0;

@end
