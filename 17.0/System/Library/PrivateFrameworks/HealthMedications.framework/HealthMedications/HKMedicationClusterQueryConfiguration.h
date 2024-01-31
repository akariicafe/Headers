@class NSArray, NSString, NSDate;

@interface HKMedicationClusterQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) long long queryType;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) NSArray *scanResult;
@property (copy, nonatomic) NSString *machineReadableCode;
@property (nonatomic) long long codeAttributeType;
@property (copy, nonatomic) NSArray *textSearchTokens;
@property (copy, nonatomic) NSArray *existingMedications;
@property (copy, nonatomic) NSDate *sinceDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
