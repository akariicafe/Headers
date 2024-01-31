@class FACacheImageMarqueeOperation;

@interface FACacheImageMarqueeOperationWrapper : NSObject

@property (retain, nonatomic) FACacheImageMarqueeOperation *cacheImageOperation;

- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0;
- (void)createAndCacheData;
- (void)generateMarqueeWith:(unsigned long long)a0;

@end
