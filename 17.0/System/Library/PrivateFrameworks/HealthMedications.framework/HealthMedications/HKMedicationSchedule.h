@class NSTimeZone, NSUUID, NSString, NSArray, NSDate, NSDateComponents;

@interface HKMedicationSchedule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *medicationUUID;
@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) struct { long long minimum; long long origin; } compatibilityRange;
@property (readonly, nonatomic, getter=isUnavailable) BOOL unavailable;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *medicationIdentifier;
@property (readonly, copy, nonatomic) NSTimeZone *createdUTCOffset;
@property (readonly, copy, nonatomic) NSDate *startDateTime;
@property (readonly, copy, nonatomic) NSDate *endDateTime;
@property (readonly, copy, nonatomic) NSArray *timeIntervals;
@property (readonly, nonatomic) long long frequencyType;
@property (readonly, copy, nonatomic) NSDateComponents *cycleStartDate;
@property (readonly, copy, nonatomic) NSString *note;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setMedicationUUID:(id)a0;
- (id)deletedSchedule;
- (id)_copyByReplacingCompatibilityVersionRange:(struct { long long x0; long long x1; })a0;
- (id)initWithUUID:(id)a0 medicationIdentifier:(id)a1 createdUTCOffset:(id)a2 startDateTime:(id)a3 endDateTime:(id)a4 timeIntervals:(id)a5 frequencyType:(long long)a6 cycleStartDateComponent:(id)a7 note:(id)a8;
- (id)initWithUUID:(id)a0 medicationUUID:(id)a1 medicationIdentifier:(id)a2 createdUTCOffset:(id)a3 startDateTime:(id)a4 endDateTime:(id)a5 timeIntervals:(id)a6 frequencyType:(long long)a7 cycleStartDateComponent:(id)a8 note:(id)a9 creationTimestamp:(double)a10 deleted:(BOOL)a11 compatibilityVersionRange:(struct { long long x0; long long x1; })a12;
- (id)unavailableSchedule;

@end
