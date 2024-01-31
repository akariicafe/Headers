@class NSPersistentContainer, NSString, NSPersistentStore;

@interface RCPersistentContainer : NSObject {
    BOOL _viewContextIsConfigured;
}

@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) NSString *transactionAuthor;
@property (readonly, nonatomic) NSPersistentStore *store;

+ (id)storeDescriptionForURL:(id)a0 isXPCClient:(BOOL)a1 configuration:(id)a2;

- (id)initWithURL:(id)a0;
- (id)newContextWithConcurrencyType:(unsigned long long)a0;
- (id)newBackgroundModel;
- (void).cxx_destruct;
- (void)_configureContext:(id)a0 isViewContext:(BOOL)a1;
- (id)loadStore:(id)a0 error:(id *)a1;
- (id)storeDescriptionWithURL:(id)a0;

@end
