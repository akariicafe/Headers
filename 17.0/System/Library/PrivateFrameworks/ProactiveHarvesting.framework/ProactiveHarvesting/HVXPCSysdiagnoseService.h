@class _PASXPCClientHelper;

@interface HVXPCSysdiagnoseService : NSObject {
    _PASXPCClientHelper *_helper;
}

- (id)init;
- (id)synchronousProxy;
- (void).cxx_destruct;
- (id)sysdiagnoseStringWithError:(id *)a0;

@end
