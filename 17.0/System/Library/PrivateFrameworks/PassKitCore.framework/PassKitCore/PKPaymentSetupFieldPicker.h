@class NSArray, PKPaymentSetupFieldPickerItem, NSString;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (nonatomic) unsigned long long pickerType;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)displayString;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonUpdate;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithAttribute:(id)a0;
- (void)updateWithConfiguration:(id)a0;

@end
