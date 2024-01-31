@class REMObjectID;

@interface REMSmartListSectionStorage : REMBaseSectionStorage

@property (retain, nonatomic) REMObjectID *smartListID;

+ (id)cdEntityName;

- (id)cdKeyToStorageKeyMap;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 smartListID:(id)a2 displayName:(id)a3;

@end
