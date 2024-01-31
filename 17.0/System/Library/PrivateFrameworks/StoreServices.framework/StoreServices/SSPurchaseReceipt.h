@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {
    ISPurchaseReceipt *_purchaseReceipt;
}

@property (readonly) BOOL isValid;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;
@property (readonly) NSDate *expirationDate;

+ (void)getReceiptPathWithCompletionBlock:(id /* block */)a0;
+ (id)receiptPathForProxy:(id)a0;
+ (int)vppStateFlagsWithProxy:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerPath:(id)a0;
- (BOOL)receiptExpired;

@end
