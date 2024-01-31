@class NSArray, NSString, ICURLAggregatedPerformanceMetrics, NSDate, NSNumber;

@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse> {
    NSArray *_childResponses;
}

@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy, nonatomic) NSNumber *accountIdentifier;
@property (readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, copy, nonatomic) id rawResponse;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemForIdentifier:(id)a0;
- (id)initWithResponses:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
