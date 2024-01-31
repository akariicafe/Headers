@class NSString, ASCLockupView, NSNumber, UIViewController;

@interface DMCEnrollmentTableViewAppLockupCell : UITableViewCell <ASCLockupViewDelegate, DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) ASCLockupView *lockupView;
@property (retain, nonatomic) NSNumber *iTunesItemID;
@property (weak) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (id)presentingViewControllerForLockupView:(id)a0;
- (id)initWithLockupRequest:(id)a0 lockupViewGroup:(id)a1 presentingViewController:(id)a2;

@end
