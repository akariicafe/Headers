@class NSArray, _TtC10FinanceKit18XPCCloudOrderQuery, NSXPCInterface, NSError;

@interface FinanceKit.StoreService : _TtCs12_SwiftObject <FinanceKit.StoreXPCProtocol> {
    void /* unknown type, empty encoding */ implementation;
}

@property (class, nonatomic, readonly) NSXPCInterface *exportedInterface;

- (void)executeWithCloudOrderQuery:(_TtC10FinanceKit18XPCCloudOrderQuery *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)forceCloudExportWithCompletionHandler:(void (^)(NSError *))a0;
- (void)forceCloudImportWithCompletionHandler:(void (^)(NSError *))a0;
- (void)reindexSpotlight;

@end
