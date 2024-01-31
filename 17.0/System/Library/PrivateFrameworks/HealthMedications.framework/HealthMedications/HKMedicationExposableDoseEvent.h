@class NSString, NSUUID, HKMedicationIdentifier, NSNumber, NSDate;

@interface HKMedicationExposableDoseEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *semanticIdentifier;
@property (readonly, nonatomic) long long logOrigin;
@property (readonly, copy, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, copy, nonatomic) HKMedicationIdentifier *medicationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *scheduledDoseQuantity;
@property (readonly, copy, nonatomic) NSNumber *doseQuantity;
@property (readonly, copy, nonatomic) NSDate *scheduledDate;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSUUID *persistedUUID;

+ (id)asNeededExposableDoseEventForMedication:(id)a0 doseQuantity:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLogOrigin:(long long)a0 scheduleItemIdentifier:(id)a1 semanticIdentifier:(id)a2 medicationIdentifier:(id)a3 scheduledDoseQuantity:(id)a4 doseQuantity:(id)a5 scheduledDate:(id)a6 startDate:(id)a7 status:(long long)a8 persistedUUID:(id)a9;
- (id)initWithDoseEvent:(id)a0;
- (id)updateForNewDoseQuantity:(id)a0;
- (id)updateForNewStartDate:(id)a0;
- (id)updateForNewStatus:(long long)a0;
- (id)updateForSemanticIdentifier:(id)a0;

@end
