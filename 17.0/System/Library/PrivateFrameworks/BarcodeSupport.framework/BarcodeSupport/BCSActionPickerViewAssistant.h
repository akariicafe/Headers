@class NSString, UIAlertController;

@interface BCSActionPickerViewAssistant : NSObject <BCSActionPickerItemDelegate> {
    UIAlertController *_alertController;
}

@property (readonly, nonatomic, getter=isShowingPicker) BOOL showingPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cleanUpAlertController;
- (void)actionPickerItem:(id)a0 didDismissAlertController:(id)a1;
- (id)actionPickerItemAlertController:(id)a0;
- (BOOL)showActionPickerWithItems:(id)a0 fromViewController:(id)a1 presentingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
