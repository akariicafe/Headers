@interface _TtCV14WorkflowEditor17ContactPickerView11Coordinator : NSObject <CNContactPickerDelegate, WFRecipientFieldViewControllerDelegate> {
    void /* unknown type, empty encoding */ parent;
}

- (id)init;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)recipientViewControllerDidFinish:(id)a0 cancelled:(BOOL)a1;

@end
