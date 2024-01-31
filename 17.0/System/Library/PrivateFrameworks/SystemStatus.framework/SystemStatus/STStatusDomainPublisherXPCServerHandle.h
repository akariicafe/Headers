@class NSObject, NSString, NSXPCConnection, STStatusDomainDataChangeLog, BSMutableIntegerMap;
@protocol OS_dispatch_queue;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle> {
    STStatusDomainDataChangeLog *_dataChangeLog;
    BSMutableIntegerMap *_dataMutationCompletionsByDomain;
    BSMutableIntegerMap *_volatileDataMutationCompletionsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_serverXPCConnection;
    id /* block */ _xpcConnectionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (id)init;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithXPCConnectionProvider:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)succinctDescription;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;

@end
