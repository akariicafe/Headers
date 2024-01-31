@interface DYMTLIndirectCommandBufferInfo : NSObject

@property (readonly, nonatomic) unsigned long long maxCommandCount;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long maxKernelThreadgroupMemoryBindCount;

- (id)initWithMaxCommandCount:(unsigned long long)a0 options:(unsigned long long)a1 maxKernelThreadgroupMemoryBindCount:(unsigned long long)a2;

@end
