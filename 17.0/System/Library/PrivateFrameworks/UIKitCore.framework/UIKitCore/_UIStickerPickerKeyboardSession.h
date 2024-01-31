@class NSString, _UIStickerPickerViewController, UIResponder, UIView;
@protocol UITextInput, _UIStickerPickerKeyboardSessionDelegate;

@interface _UIStickerPickerKeyboardSession : NSObject <_UIStickerPickerViewControllerDelegate> {
    UIResponder<UITextInput> *_textInput;
    UIView *_view;
    _UIStickerPickerViewController *_stickerPicker;
}

@property (weak) id<_UIStickerPickerKeyboardSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerPickerViewControllerDidDismiss;
- (BOOL)remoteHandlesRecentsStickerDonation;
- (void).cxx_destruct;
- (void)insertStickerFromItemProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentWithTextInput:(id)a0 view:(id)a1;

@end
