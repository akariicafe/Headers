@interface ASClientController : SUClientController

@property (nonatomic) BOOL shouldExitAfterPurchases;

- (id)initWithClientIdentifier:(id)a0;
- (id)purchaseManager:(id)a0 purchaseBatchForItems:(id)a1;
- (id)purchaseManager:(id)a0 purchaseBatchForPurchases:(id)a1;
- (id)initWithClientInterface:(id)a0;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)a0;

@end
