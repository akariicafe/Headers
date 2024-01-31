@class NSString, NSDictionary, NSMutableDictionary;

@interface SKUIItemOffer : NSObject <SKUICacheCoding> {
    NSString *_fileSizeText;
    NSString *_offerTypeString;
}

@property (readonly, nonatomic) NSString *actionParameters;
@property (readonly, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) NSString *confirmationText;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) NSString *fileSizeText;
@property (readonly, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) long long offerType;
@property (readonly, nonatomic) float price;
@property (readonly, nonatomic) BOOL shouldEnableMessagesExtension;
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheRepresentation:(id)a0;
- (void)_addActionParameterWithName:(id)a0 value:(id)a1;
- (void)_setFileSizeWithAssets:(id)a0;
- (void)_setFileSizeWithDeviceSizes:(id)a0;
- (void)_setFileSizeWithFlavors:(id)a0;
- (id)initWithButtonText:(id)a0;
- (id)initWithOfferDictionary:(id)a0;
- (id)initWithRedownloadToken:(id)a0;

@end
