@class NSString, TIKeyboardLayout, NSArray;

@interface TITypologyRecordReplacements : TITypologyRecord

@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (retain, nonatomic) NSArray *candidates;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
