@class NSString, NSArray;

@interface VSCredentialEntryPicker : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *pickerItems;
@property (nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (id)pickerItemAtCurrentIndex;

@end
