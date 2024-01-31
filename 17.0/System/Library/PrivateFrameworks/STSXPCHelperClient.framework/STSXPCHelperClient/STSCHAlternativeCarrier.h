@class NSArray, STSNDEFRecord;

@interface STSCHAlternativeCarrier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long powerState;
@property (retain, nonatomic) STSNDEFRecord *carrierRecord;
@property (retain, nonatomic) NSArray *auxiliaryRecords;

+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_createCarrierConfigurationRecord;
- (id)createAlternativeCarrierRecord;
- (id)createNdefRecordBundle;
- (id)initWithNdefRecordBundle:(id)a0;

@end
