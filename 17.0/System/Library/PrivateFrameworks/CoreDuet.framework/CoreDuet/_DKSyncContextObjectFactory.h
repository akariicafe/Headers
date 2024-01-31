@class _DKSyncContext, NSMutableDictionary;

@interface _DKSyncContextObjectFactory : NSObject {
    NSMutableDictionary *_instances;
}

@property (readonly, nonatomic) _DKSyncContext *context;
@property (readonly, nonatomic) Class class;

+ (id)objectFactoryForClass:(Class)a0 context:(id)a1;

- (id)instance;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 fabricateClass:(Class)a1;

@end
