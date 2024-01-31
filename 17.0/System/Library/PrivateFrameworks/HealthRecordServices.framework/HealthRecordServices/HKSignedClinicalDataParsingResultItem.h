@class HKSignedClinicalDataRecord, NSData, HDHRSOriginalSignedClinicalDataRecord;

@interface HKSignedClinicalDataParsingResultItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDHRSOriginalSignedClinicalDataRecord *originalRecord;
@property (readonly, copy, nonatomic) HKSignedClinicalDataRecord *mainRecord;
@property (readonly, copy, nonatomic) NSData *uniquenessChecksum;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithOriginalRecord:(id)a0 mainRecord:(id)a1;
- (id)initWithOriginalRecord:(id)a0 mainRecord:(id)a1;

@end
