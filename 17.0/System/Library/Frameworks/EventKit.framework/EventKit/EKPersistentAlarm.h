@class NSString;

@interface EKPersistentAlarm : EKPersistentObject

@property (readonly, nonatomic) NSString *oldSemanticIdentifier;

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;

- (id)emailAddress;
- (void)setType:(long long)a0;
- (void)setEmailAddress:(id)a0;
- (id)urlWrapper;
- (id)relativeOffset;
- (id)structuredLocation;
- (id)originalAlarm;
- (id)externalData;
- (id)acknowledgedDate;
- (int)entityType;
- (void)setAbsoluteDate:(id)a0;
- (void)setUUID:(id)a0;
- (id)calendarItemOwner;
- (id)description;
- (void)setProximity:(long long)a0;
- (id)snoozedAlarmsSet;
- (long long)proximity;
- (BOOL)isDefaultAlarm;
- (void)setUrlWrapper:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (void)setExternalData:(id)a0;
- (id)absoluteDate;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setAcknowledgedDate:(id)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (void)setRelativeOffset:(id)a0;
- (id)UUID;
- (long long)type;
- (id)calendarOwner;
- (void)setStructuredLocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOriginalAlarm:(id)a0;
- (void)setCalendarOwner:(id)a0;

@end
