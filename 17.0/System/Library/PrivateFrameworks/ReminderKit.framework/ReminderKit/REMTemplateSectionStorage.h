@class REMObjectID;

@interface REMTemplateSectionStorage : REMBaseSectionStorage

@property (retain, nonatomic) REMObjectID *parentTemplateID;

+ (id)cdEntityName;

- (id)cdKeyToStorageKeyMap;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 parentTemplateID:(id)a2 displayName:(id)a3;

@end
