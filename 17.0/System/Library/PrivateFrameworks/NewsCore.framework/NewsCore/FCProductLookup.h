@class SKProductsRequest, NSString, SKProduct, NSError, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate> {
    NSString *_offerName;
    NSNumber *_appAdamID;
    NSNumber *_storeExternalVersionID;
    NSString *_bundleID;
    NSObject<OS_dispatch_group> *_productRequestGroup;
    SKProductsRequest *_request;
    SKProduct *_product;
    NSError *_productLookupError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
