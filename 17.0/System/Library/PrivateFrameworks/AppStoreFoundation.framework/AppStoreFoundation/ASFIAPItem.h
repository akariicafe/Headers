@class NSString, NSNumber, NSDate;

@interface ASFIAPItem : NSObject <NSCopying> {
    NSDate *_originalPurchaseDate;
    NSString *_originalTransactionID;
    NSDate *_purchaseDate;
    NSString *_productID;
    NSNumber *_quantity;
    NSString *_transactionID;
}

@property (readonly) NSDate *originalPurchaseDate;
@property (readonly) NSString *originalTransactionID;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSString *productID;
@property (readonly) NSNumber *quantity;
@property (readonly) NSString *transactionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
