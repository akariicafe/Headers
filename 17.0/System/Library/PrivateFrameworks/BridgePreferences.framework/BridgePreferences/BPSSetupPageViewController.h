@class UILabel, NSString, UIView;
@protocol BPSBuddyControllerDelegate;

@interface BPSSetupPageViewController : UIViewController <BPSBuddyController> {
    UIView *_contentView;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } computedTitleFrame;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<BPSBuddyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedTitle;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)titleString;
- (void)updateTitleLabel;
- (id)_baseIdentifier;
- (id)titleAttributedString;
- (id)followUpActions;
- (void)addFollowUpForPageAndDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)addFollowUpForPageWithCompletion:(id /* block */)a0;
- (BOOL)contentViewIsInAdjustedScrollView;
- (id)followUpIdentifier;
- (id)localizedInformativeNotificationText;
- (id)localizedInformativeText;
- (id)localizedNotificationTitle;
- (void)removeFollowupForPageWithCompletion:(id /* block */)a0;
- (double)verticalTitleInset;
- (BOOL)wantsFollowUpNotification;

@end
