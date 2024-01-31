@class NSString, PBItemCollection, NSMutableDictionary;

@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol> {
    NSMutableDictionary *_cleanupQueue_cleanupHandlerByUUID;
}

@property (retain, nonatomic) PBItemCollection *itemCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newServicerForConnection:(id)a0 itemCollection:(id)a1;

- (void)helloCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)waitForItemRequestsDeliveryCompletion:(id /* block */)a0;
- (void)callCleanupBlockWithUUID:(id)a0;
- (id)initWithConnection:(id)a0 itemCollection:(id)a1;
- (void)loadRepresentationForItemAtIndex:(unsigned long long)a0 type:(id)a1 completionBlock:(id /* block */)a2;

@end
