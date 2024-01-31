@class NSString, ASCLockupView;

@interface DMCEnrollmentInstallAppButtonView : UIView <ASCLockupViewDelegate_ForTVProvider>

@property (retain, nonatomic) ASCLockupView *lockupView;
@property (nonatomic) double preferredHeight;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (id)presentingViewControllerForLockupView:(id)a0;
- (BOOL)lockupViewShouldSupportDSIDLessInstalls:(id)a0;
- (id)initWithLockupRequest:(id)a0 lockupViewGroup:(id)a1 completionHandler:(id /* block */)a2;

@end
