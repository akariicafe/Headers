@class AMSCarrierLinkResult, AMSPurchaseResult;

@interface IKAppDynamicUIResult : NSObject

@property (retain, nonatomic) AMSPurchaseResult *purchaseResult;
@property (retain, nonatomic) AMSCarrierLinkResult *carrierLinkResult;

+ (id)_rawResultWithDynamicUIResult:(id)a0;
+ (id)_responseDictionaryWithCarrierLinkResult:(id)a0;

- (id)rawResponse;
- (void).cxx_destruct;
- (id)initWithCarrierLinkResult:(id)a0;
- (id)initWithPurchaseResult:(id)a0;

@end
