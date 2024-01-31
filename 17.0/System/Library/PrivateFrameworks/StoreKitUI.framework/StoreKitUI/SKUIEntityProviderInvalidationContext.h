@interface SKUIEntityProviderInvalidationContext : NSObject

@property (readonly, nonatomic) BOOL invalidateEverything;
@property (readonly, nonatomic) BOOL invalidateDataSourceCounts;

- (void)setInvalidateEverything:(BOOL)a0;
- (void)setInvalidateDataSourceCounts:(BOOL)a0;

@end
