@class PKAccountService, NSString, NSArray, NSMutableDictionary, PKAccountEnhancedMerchantBehavior, NSDate;

@interface PKAccountEnhancedMerchantsFetcher : NSObject <PKAccountServiceObserver> {
    NSString *_accountIdentifier;
    PKAccountService *_accountService;
    NSArray *_items;
    NSArray *_orderings;
    PKAccountEnhancedMerchantBehavior *_behavior;
    NSDate *_lastUpdate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemsLock;
    NSMutableDictionary *_tokenToUpdateHandlerMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setItems:(id)a0;
- (void)dealloc;
- (id)addUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_lastUpdateCopy;
- (void)_setLastUpdate:(id)a0;
- (void)didUpdateAccountEnhancedMerchants:(id)a0 accountIdentifier:(id)a1 lastUpdate:(id)a2;
- (id)_enhancedMerchantBehaviorCopy;
- (void)_executeWithLock:(id /* block */)a0;
- (void)_reloadDataIncludeOrderings:(BOOL)a0 includeBehavior:(BOOL)a1 includeMerchants:(BOOL)a2 completion:(id /* block */)a3;
- (void)_triggerUpdateHandlers;
- (BOOL)dataIsWithinThresholdForCooldownLevel:(unsigned long long)a0;
- (id)enhancedMerchantMatchingPaymentIdentifier:(id)a0;
- (id)enhancedMerchants;
- (id)enhancedMerchantsWithOrderingContext:(unsigned long long)a0;
- (id)initWithAccountIdentifier:(id)a0 accountService:(id)a1;
- (void)reloadDataWithCompletion:(id /* block */)a0;
- (void)removeUpdateHandler:(id)a0;
- (void)updateDataWithCooldownLevel:(unsigned long long)a0 ignoreErrorBackoff:(BOOL)a1 completion:(id /* block */)a2;

@end
