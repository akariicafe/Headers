@class NSURL;

@interface PKWebServiceStaticContentDataSourceFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL blockStaticContentFetching;
@property (readonly, nonatomic) NSURL *contentURL;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;
- (id)createProductsRequestWithIsFetchBlocked:(BOOL *)a0;

@end
