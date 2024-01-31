@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)referenceFrame;
- (id)radius;
- (id)address;
- (void)setLatitude:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (void)setRadius:(id)a0;
- (void)setLongitude:(id)a0;
- (void)setAddress:(id)a0;
- (id)latitude;
- (int)entityType;
- (id)calendarItemOwner;
- (id)description;
- (id)title;
- (void)setCalendarItemOwner:(id)a0;
- (id)longitude;
- (void)setRouting:(id)a0;
- (void)setTitle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mapKitHandle;
- (void)setMapKitHandle:(id)a0;
- (id)contactLabel;
- (void)setContactLabel:(id)a0;
- (id)routing;
- (void)setDerivedFrom:(id)a0;
- (id)alarmOwner;
- (id)derivedFrom;
- (void)setAlarmOwner:(id)a0;

@end
