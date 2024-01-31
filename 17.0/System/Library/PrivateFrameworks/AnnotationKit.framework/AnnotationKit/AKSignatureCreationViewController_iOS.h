@class AKController, AKSignatureBaselineView, UINavigationBar, NSString, NSUndoManager, UIButton, AKInkSignatureView, UIResponder, UILabel, AKSmoothPathView;
@protocol AKSignatureCreationControllerDelegate;

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate>

@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *downArrowButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) AKSmoothPathView *pathView;
@property (retain, nonatomic) AKInkSignatureView *signatureView;
@property (retain, nonatomic) AKSignatureBaselineView *baselineView;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property long long descriptionTag;
@property (retain, nonatomic) NSString *customDescription;
@property (retain, nonatomic) NSUndoManager *_undoManager;
@property (weak) id<AKSignatureCreationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (id)undoManager;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)becomeFirstResponder;
- (long long)positionForBar:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)_clear:(id)a0;
- (void)_notifyDidDismiss;
- (void)_removeSignatureDescription;
- (void)_showSignatureDescriptionSelectionAlert;
- (void)_updateSignatureDescriptionWithStringValue:(id)a0;
- (void)_validateButtons;
- (void)showEditCustomDescriptionAlert;

@end
