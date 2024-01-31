@class VCPObjectPool;

@interface VCPLoaned : NSObject {
    VCPObjectPool *_pool;
}

@property (readonly, nonatomic) id object;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 fromPool:(id)a1;

@end
