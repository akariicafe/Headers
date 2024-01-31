@class REMObjectID, REMTemplate;

@interface REMTemplateSection : REMBaseSection

@property (readonly, nonatomic) REMTemplate *parentTemplate;
@property (retain, nonatomic) REMObjectID *parentTemplateID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0 parentTemplate:(id)a1 storage:(id)a2;

@end
