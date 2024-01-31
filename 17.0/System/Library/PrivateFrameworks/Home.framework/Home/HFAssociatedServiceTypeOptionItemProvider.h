@class HMHome, HMService, NSString;

@interface HFAssociatedServiceTypeOptionItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) NSString *serviceType;

+ (id)_allItemsForService:(id)a0 serviceType:(id)a1;
+ (id)_itemForService:(id)a0 associatedServiceType:(id)a1;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithService:(id)a0 serviceType:(id)a1 home:(id)a2;
- (id)initWithServiceType:(id)a0 home:(id)a1;

@end
