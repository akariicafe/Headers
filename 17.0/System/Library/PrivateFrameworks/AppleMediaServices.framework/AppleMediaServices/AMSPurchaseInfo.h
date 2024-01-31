@class AMSPurchase, NSString, NSURL, AMSPurchaseTask, NSMutableDictionary, AMSBuyParams, ACAccount, NSDictionary, LAContext, NSNumber, AMSProcessInfo;
@protocol AMSPurchaseDelegate;

@interface AMSPurchaseInfo : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (weak, nonatomic) AMSPurchaseTask *activePurchaseTask;
@property (retain, nonatomic) NSMutableDictionary *additionalHeaders;
@property (nonatomic) BOOL addKBSync;
@property (retain, nonatomic) AMSBuyParams *buyParams;
@property (readonly, nonatomic) NSString *clientCorrelationKey;
@property (readonly, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic) id<AMSPurchaseDelegate> delegate;
@property (retain, nonatomic) NSDictionary *dialog;
@property (retain, nonatomic) NSString *dialogId;
@property (retain, nonatomic) NSNumber *expressCheckoutMode;
@property (nonatomic) BOOL hasBeenAuthedForBuy;
@property (nonatomic) BOOL hasRetriedOriginalOwnerAccount;
@property (retain, nonatomic) NSDictionary *idmsTokens;
@property (retain, nonatomic) LAContext *localAuthContext;
@property (retain, nonatomic) NSURL *paymentServicesURL;
@property (retain, nonatomic) NSString *paymentToken;
@property (readonly, nonatomic) AMSPurchase *purchase;

- (id)description;
- (void).cxx_destruct;
- (id)_purchaseStringForType:(long long)a0;
- (id)initWithPurchase:(id)a0;

@end
