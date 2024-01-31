@class NSUUID, NSString, NSNumber;

@interface HKMedicationScheduleItemDose : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *scheduleUUID;
@property (readonly, copy, nonatomic) NSString *medicationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *dose;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScheduleUUID:(id)a0 dose:(id)a1 medicationIdentifier:(id)a2;

@end
