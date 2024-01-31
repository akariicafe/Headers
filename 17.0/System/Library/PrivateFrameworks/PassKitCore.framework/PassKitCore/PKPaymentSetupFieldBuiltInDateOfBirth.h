@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;

- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isBuiltIn;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)a0;

@end
