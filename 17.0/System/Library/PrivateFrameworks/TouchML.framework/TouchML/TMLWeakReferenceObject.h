@interface TMLWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
