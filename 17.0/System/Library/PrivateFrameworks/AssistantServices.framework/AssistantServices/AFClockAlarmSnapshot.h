@class NSString, NSDictionary, NSOrderedSet, NSDate;

@interface AFClockAlarmSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDictionary *alarmsByID;
@property (readonly, copy, nonatomic) NSOrderedSet *notifiedFiringAlarmIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (BOOL)hasFiringAlarms;
- (id)mostRecentFiringAlarm;
- (void)encodeWithCoder:(id)a0;
- (id)serializedBackingStore;
- (id)ad_shortDescription;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)firingAlarms;
- (void).cxx_destruct;
- (id)initWithGeneration:(unsigned long long)a0 date:(id)a1 alarmsByID:(id)a2 notifiedFiringAlarmIDs:(id)a3;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
