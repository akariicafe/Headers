@class SBWindowedAccessoryView, NSString;
@protocol SBWindowedAccessoryViewControllerDelegate;

@interface SBWindowedAccessoryViewController : UIViewController <SBWindowedAccessoryViewDelegate>

@property (retain, nonatomic) SBWindowedAccessoryView *windowedAccessoryView;
@property (weak, nonatomic) id<SBWindowedAccessoryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)forceDetachWindowedAcessoryButtonTapped:(id)a0;

@end
