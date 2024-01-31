@class NSString, HUPinCodeDetailsViewController, UIBarButtonItem;
@protocol HUPresentationDelegate;

@interface HUAddGuestViewController : HUItemTableOBWelcomeController <HUPinCodeDetailsViewDelegate, HUDetailsPresentationDelegateHost>

@property (retain, nonatomic) HUPinCodeDetailsViewController *pinCodeDetailsController;
@property (retain, nonatomic) UIBarButtonItem *saveButtonItem;
@property (retain, nonatomic) UIBarButtonItem *addButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

@end
