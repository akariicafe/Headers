@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (void)clear;
- (void)setChanged:(BOOL)a0;
- (void)setBuffer:(id)a0;
- (id)buffer;
- (id)description;
- (id)get;
- (id)initWithBuffer:(id)a0;
- (void)flushMemory;

@end
