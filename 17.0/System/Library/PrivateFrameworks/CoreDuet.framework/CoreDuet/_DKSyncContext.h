@class NSString, _DKKnowledgeStorage;

@interface _DKSyncContext : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) _DKKnowledgeStorage *storage;

+ (id)new;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
