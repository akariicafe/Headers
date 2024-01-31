@interface STSCHNfcAlternativeCarrier : STSCHAlternativeCarrier

@property (nonatomic) long long maxLc;
@property (nonatomic) long long maxLe;

+ (BOOL)supportsSecureCoding;
+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_createCarrierConfigurationRecord;
- (id)initWithMaxLcField:(long long)a0 maxLeField:(long long)a1 auxiliaryRecords:(id)a2;
- (id)initWithNdefRecordBundle:(id)a0;

@end
