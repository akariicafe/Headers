@class NSString, STStatusDomainDataChangeLog, NSMutableDictionary, STStatusDomainPublisherXPCClientListener, BSIntegerSet, BSMutableIntegerMap, NSObject, NSMapTable, STStatusDomainXPCClientListener;
@protocol OS_dispatch_queue, STLocalStatusServerDelegate;

@interface STLocalStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle> {
    BSMutableIntegerMap *_clientsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    NSMapTable *_changeLogKeysByPublisherClient;
    STStatusDomainDataChangeLog *_dataChangeLog;
    STStatusDomainXPCClientListener *_xpcClientListener;
    STStatusDomainPublisherXPCClientListener *_publisherXPCClientListener;
    NSMutableDictionary *_dataTransformersByDomain;
    NSMutableDictionary *_clientDataTransformerProvidersByDomain;
    NSMutableDictionary *_domainsByChangeLogKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (weak, nonatomic) id<STLocalStatusServerDelegate> delegate;
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (id)init;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (id)succinctDescriptionBuilder;
- (void)removeDataTransformer:(id)a0 forDomain:(unsigned long long)a1;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)dataForDomain:(unsigned long long)a0;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)removeClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addDataTransformer:(id)a0 forDomain:(unsigned long long)a1;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)succinctDescription;
- (void)modifyDataTransformer:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)modifyClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)addClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;

@end
