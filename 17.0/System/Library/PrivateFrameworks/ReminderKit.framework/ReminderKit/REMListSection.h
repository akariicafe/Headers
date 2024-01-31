@class REMList, NSString, REMObjectID;

@interface REMListSection : REMBaseSection

@property (readonly, nonatomic) REMList *list;
@property (readonly, nonatomic) NSString *canonicalName;
@property (retain, nonatomic) REMObjectID *listID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0 list:(id)a1 storage:(id)a2;

@end
