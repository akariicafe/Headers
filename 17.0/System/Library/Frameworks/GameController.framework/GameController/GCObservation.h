@interface GCObservation : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) unsigned long long options;
@property (nonatomic) void *context;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;

@end
