@class NSString, NSMutableDictionary;

@interface SKUIInAppPurchase : NSObject <SKUICacheCoding>

@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCacheRepresentation:(id)a0;
- (id)initWithInAppPurchaseDictionary:(id)a0;

@end
