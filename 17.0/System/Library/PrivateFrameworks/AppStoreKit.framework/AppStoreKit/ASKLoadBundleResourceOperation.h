@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSArray *searchBundles;

+ (id)_searchBundles;
+ (id)supportedScheme;

- (void)main;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (void).cxx_destruct;
- (id)initWithResourceName:(id)a0;

@end
