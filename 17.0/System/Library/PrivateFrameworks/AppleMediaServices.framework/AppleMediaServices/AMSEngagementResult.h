@class NSString, AMSCarrierLinkResult, NSData, AMSPurchaseResult, NSDictionary;

@interface AMSEngagementResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ams_buyParams;
@property (retain, nonatomic) NSData *modelData;
@property (retain, nonatomic) AMSCarrierLinkResult *carrierLinkResult;
@property (retain, nonatomic) AMSPurchaseResult *purchaseResult;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)_updatedBodyFromValue:(id)a0 request:(id)a1;

- (id)initWithPath:(long long)a0;
- (id)initWithModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSelection:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)ams_requestActionFromRequest:(id)a0;
- (id)expressCheckoutCardSelection;
- (long long)expressCheckoutPath;
- (id)modelForClass:(Class)a0 error:(id *)a1;

@end
