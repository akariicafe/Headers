@class NSString, SAABPersonPicker, SiriUIObjectPickerViewController;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)a0;
- (id)_pickerController;
- (Class)footerViewClass;
- (BOOL)usePlatterStyle;
- (void)_showPicker:(id)a0;
- (void)configureReusableFooterView:(id)a0;
- (double)desiredHeightForFooterView;
- (id)initWithSnippet:(id)a0;
- (void)pickerViewController:(id)a0 didSelectObject:(id)a1 fromPicker:(id)a2;
- (void)pickerViewController:(id)a0 willDismissPicker:(id)a1;
- (void)pickerViewController:(id)a0 willPresentPicker:(id)a1;
- (id)viewControllerForPickerPresentation:(id)a0;

@end
