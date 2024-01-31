@class FPDAccessControlStore;

@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing>

@property (weak, nonatomic) FPDAccessControlStore *accessStore;

- (void).cxx_destruct;
- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(id /* block */)a0;
- (void)revokeAccessToAllItemsForBundle:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAccessStore:(id)a0;

@end
