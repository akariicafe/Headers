@class NSString;

@interface PXPeopleUISettingsContactPickerDelegate : NSObject <CNContactPickerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactPicker:(id)a0 didSelectContact:(id)a1;

@end
