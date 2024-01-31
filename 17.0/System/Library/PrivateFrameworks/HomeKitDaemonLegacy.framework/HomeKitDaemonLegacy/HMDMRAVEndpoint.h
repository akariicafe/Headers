@interface HMDMRAVEndpoint : HMFObject

@property (readonly, nonatomic) void *mravEndpoint;

- (unsigned long long)hash;
- (void)dealloc;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithMRAVEndpoint:(void *)a0;

@end
