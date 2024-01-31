@class NSString;

@interface PKPendingProvisioningReceipt : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *passUniqueID;
@property (nonatomic) double createdAt;

+ (id)failedReceiptWithIdentifier:(id)a0;
+ (id)successReceiptWithIdentifier:(id)a0 passUniqueID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initForDatabase;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 passUniqueID:(id)a2;

@end
