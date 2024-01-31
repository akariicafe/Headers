@interface BufferInfo : NSObject

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long usage;

- (void)incrementUsage;
- (id)initWithSize:(unsigned long long)a0 usage:(unsigned long long)a1;
- (void)resetUsage;

@end
