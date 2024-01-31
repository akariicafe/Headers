@class HDSyncIdentity, NSString, NSArray, NSSet, NSDateComponents, NSDate, HKUnit;

@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } packedVisibilityStart;
@property struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } packedVisibilityEnd;
@property struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } packedAvailabilityStart;
@property struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } packedAvailabilityEnd;
@property unsigned long long key;
@property (retain) NSString *uniqueName;
@property unsigned long long version;
@property unsigned char minimumEngineVersion;
@property (retain) NSDate *createdDate;
@property unsigned char creatorDevice;
@property (retain) NSString *sourceName;
@property (retain) NSString *predicate;
@property (retain) NSString *gracePredicate;
@property (retain) NSString *valueExpression;
@property (retain) NSString *graceValueExpression;
@property (retain) NSString *progressExpression;
@property (retain) NSString *graceProgressExpression;
@property (retain) NSString *goalExpression;
@property (retain) NSString *graceGoalExpression;
@property unsigned long long triggers;
@property unsigned char earnLimit;
@property (retain) NSString *visibilityPredicate;
@property (retain) NSString *graceVisibilityPredicate;
@property (retain) NSDateComponents *visibilityStart;
@property (retain) NSDateComponents *visibilityEnd;
@property (retain) NSString *availabilityPredicate;
@property (retain) NSDateComponents *availabilityStart;
@property (retain) NSDateComponents *availabilityEnd;
@property (retain) NSArray *availableCountryCodes;
@property (retain) NSString *alertabilityPredicate;
@property (retain) NSSet *alertDates;
@property unsigned char duplicateRemovalStrategy;
@property unsigned long long duplicateRemovalCalendarUnit;
@property unsigned char earnDateStrategy;
@property (retain) HKUnit *canonicalUnit;
@property unsigned long long displayOrder;
@property BOOL displaysEarnedInstanceCount;
@property (retain) NSArray *availableSuffixes;
@property BOOL availableOnPairedDevice;
@property unsigned long long mobileAssetVersion;
@property double dailyTarget;
@property (retain) HKUnit *dailyTargetCanonicalUnit;
@property (retain) HDSyncIdentity *syncIdentity;
@property (retain) NSString *prerequisiteTemplateName;

- (id)_displayStringForAlertDates:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)_isValid;
- (void)encodeWithCoder:(id)a0;
- (id)_displayStringForStringValues:(id)a0;
- (id)initWithCodable:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
