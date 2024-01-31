@class NSString, ASCLockupView;
@protocol ASCOffer;

@interface NDOSupportAppTableViewCell : PSTableCell <ASCLockupViewDelegate> {
    NSString *_supportAppURL;
    id<ASCOffer> _originalAppOffer;
}

@property (retain, nonatomic) ASCLockupView *lockupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)parentViewController;
- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (void)lockupView:(id)a0 didFailRequestWithError:(id)a1;
- (void)lockupViewDidBeginRequest:(id)a0;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)_setupAppSuportCell;
- (void)openButtonAction;

@end
