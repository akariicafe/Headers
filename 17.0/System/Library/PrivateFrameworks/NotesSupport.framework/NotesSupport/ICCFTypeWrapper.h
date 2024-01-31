@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void *)ref;
- (id)initWithCFTypeRef:(void *)a0;

@end
