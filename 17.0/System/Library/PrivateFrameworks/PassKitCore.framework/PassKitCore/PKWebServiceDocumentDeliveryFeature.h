@class NSURL;

@interface PKWebServiceDocumentDeliveryFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSURL *webServiceURL;

+ (id)featureWithWebService:(id)a0;
+ (BOOL)isEnabledWithWebService:(id)a0;
+ (id)webServiceURLWithWebService:(id)a0;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;

@end
