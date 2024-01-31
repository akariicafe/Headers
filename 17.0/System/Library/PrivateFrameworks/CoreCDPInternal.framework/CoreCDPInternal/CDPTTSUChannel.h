@class NSString, CUMessageSession;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy> {
    BOOL _approverBackupRecordsExist;
    unsigned long long _approveriCloudKeychainState;
    BOOL _sentInitialResponse;
}

@property (retain, nonatomic) CUMessageSession *sharingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)setApproveriCloudKeychainState:(unsigned long long)a0;
- (BOOL)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)listenForPayloadsWithHandler:(id /* block */)a0;
- (void)sendPayload:(id)a0 completion:(id /* block */)a1;
- (void)setApproverBackupRecordsExist:(BOOL)a0;

@end
