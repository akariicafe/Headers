@interface _SFXPCBlockContainer : NSObject <_SFXPCBlockContainerProtocol> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ containerRegistry;
    void /* unknown type, empty encoding */ registeredAsyncBlocks;
    void /* unknown type, empty encoding */ registeredSyncBlocks;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invoke:(id)a0 parametersData:(id)a1 parametersAsyncSequenceContainer:(id)a2 parametersBlocksContainer:(id)a3 sync:(BOOL)a4 completion:(id /* block */)a5;

@end
