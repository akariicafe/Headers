@class XPCOrders, NSString, NSData, NSError, NSDate, XPCFetchOrderType;

@interface FinanceKit.FinanceStoreXPCService : _TtCs12_SwiftObject <FinanceKit.FinanceStoreXPCProtocol> {
    void /* unknown type, empty encoding */ implementation;
    void /* unknown type, empty encoding */ entitlements;
    void /* unknown type, empty encoding */ auditToken;
}

- (void)activeOrdersWithCompletionHandler:(void (^)(XPCOrders *, NSError *))a0;
- (void)containsOrderWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 updatedDate:(id)a2 completion:(id /* block */)a3;
- (void)containsOrderWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 updatedDate:(NSDate *)a2 completionHandler:(void (^)(long long, NSError *))a3;
- (void)deleteOrderWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)insertOrUpdateOrderSyncWithData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)isDataAvailableFor:(long long)a0 completion:(id /* block */)a1;
- (void)ordersWithFetchType:(XPCFetchOrderType *)a0 completionHandler:(void (^)(XPCOrders *, NSError *))a1;
- (void)refreshOrderWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)saveOrderWithSignedArchive:(NSData *)a0 completionHandler:(void (^)(long long, NSError *))a1;
- (void)setOrderMarkedAsCompleteWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 newValue:(BOOL)a2 modificationDate:(NSDate *)a3 completionHandler:(void (^)(NSError *))a4;
- (void)setOrderNotificationsEnabled:(BOOL)a0 orderTypeIdentifier:(NSString *)a1 orderIdentifier:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)updateOrdersShowAsActiveWithNow:(NSDate *)a0 completionHandler:(void (^)(NSError *))a1;

@end
