@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setExternalModificationTag:(id)a0;
- (id)owner;
- (id)externalModificationTag;
- (void)setOwner:(id)a0;
- (id)externalID;
- (int)entityType;
- (void)setExternalID:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (id)externalRepresentation;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
