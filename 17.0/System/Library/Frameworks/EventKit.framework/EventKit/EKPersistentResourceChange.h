@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)calendar;
- (unsigned int)changeType;
- (int)entityType;
- (id)calendarItem;
- (id)notification;
- (id)timestamp;
- (id)deleteCount;
- (unsigned int)changedProperties;
- (id)updateCount;
- (BOOL)alerted;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
