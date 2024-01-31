@class _PASXPCClientHelper;

@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)_remoteObjectProxy;
- (id)init;
- (void).cxx_destruct;
- (id)sysdiagnoseInformationWithError:(id *)a0;

@end
