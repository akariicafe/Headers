@interface CRJSObject : NSObject <CRJSObjectExport>

@property (readonly, nonatomic) id backingObject;

+ (id)objectWithClassName:(id)a0 objectType:(id)a1;

- (void).cxx_destruct;
- (id)_backingObjectForJSValue:(id)a0;
- (void)_logErrorLog:(id)a0;
- (id)backingObjectValueForKey:(id)a0;
- (id)initWithClassName:(id)a0 objectType:(long long)a1;
- (void)setBackingObjectValue:(id)a0 forKey:(id)a1;

@end
