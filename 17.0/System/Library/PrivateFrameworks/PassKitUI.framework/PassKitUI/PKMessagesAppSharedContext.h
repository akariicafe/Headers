@class PKTransactionSource, NSArray, NSString, NSPointerArray, NSMutableDictionary, NSMutableArray, PKPaymentDefaultDataProvider;
@protocol PKMessagesAppControllerInterface;

@interface PKMessagesAppSharedContext : NSObject <PKPaymentDataProviderDelegate> {
    NSPointerArray *_weakBubbleAppControllers;
    NSMutableArray *_pendingPrimaryHandlers;
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
    PKTransactionSource *_transactionSource;
    NSMutableDictionary *_externalizedControllerStateStore;
}

@property (readonly, copy, nonatomic) NSArray *bubbleAppControllers;
@property (readonly, weak, nonatomic) id<PKMessagesAppControllerInterface> primaryAppController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContext;

- (id)init;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void).cxx_destruct;
- (id)_directoryPath;
- (void)_purgeOldCacheEntries;
- (void)_registerAppViewController:(id)a0;
- (void)_revealPrimaryAppController:(id)a0;
- (id)_sharedDirectoryPath;
- (id)_urlForMessageIdentifier:(id)a0;
- (void)_withPrimaryAppController:(id /* block */)a0;
- (id)externalizedControllerStateForMessageIdentifier:(id)a0;
- (void)handlePaymentRequestMessage:(id)a0 sender:(id)a1 completion:(id /* block */)a2;
- (void)persistExternalizedControllerState:(id)a0 forMessageIdentifier:(id)a1;
- (void)removeExternalizedControllerStateDataForMessageIdentifier:(id)a0;

@end
