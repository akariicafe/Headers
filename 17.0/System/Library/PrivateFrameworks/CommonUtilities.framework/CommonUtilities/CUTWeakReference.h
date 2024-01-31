@interface CUTWeakReference : NSObject

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectAddress;

+ (id)weakRefWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
