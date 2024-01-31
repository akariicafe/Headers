@class PXFooterViewModel, NSString, UIViewController, UIButton;
@protocol PXPhotosStatusToggleButtonControllerDelegate;

@interface PXPhotosStatusToggleButtonController : NSObject <PXPhotosGlobalFooterViewDelegate, UIPopoverPresentationControllerDelegate> {
    PXFooterViewModel *_footerViewModel;
    UIViewController *_presentedPopOverViewController;
}

@property (readonly, nonatomic) UIButton *button;
@property (weak, nonatomic) id<PXPhotosStatusToggleButtonControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)_handleButtonAction:(id)a0;
- (id)initWithFooterViewModel:(id)a0 buttonConfiguration:(id)a1;

@end
