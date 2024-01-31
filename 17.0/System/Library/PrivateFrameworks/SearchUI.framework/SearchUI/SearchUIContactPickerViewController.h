@class NSString, CNContact;

@interface SearchUIContactPickerViewController : CNContactPickerViewController <CNContactPickerDelegate, CNContactViewControllerDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;

@end
