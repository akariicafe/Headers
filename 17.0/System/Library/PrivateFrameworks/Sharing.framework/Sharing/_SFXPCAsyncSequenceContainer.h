@interface _SFXPCAsyncSequenceContainer : NSObject <Sharing._SFXPCAsyncSequenceContainerProtocol> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ containerRegistry;
    void /* unknown type, empty encoding */ sequences;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)xpcMakeAsyncIteratorFor:(id)a0 completion:(id /* block */)a1;

@end
