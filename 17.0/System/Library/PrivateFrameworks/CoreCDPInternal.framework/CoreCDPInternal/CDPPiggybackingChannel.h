@class NSString, CDPContext;

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_replyContextWithPakeData:(id)a0;
- (BOOL)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)sendPayload:(id)a0 completion:(id /* block */)a1;

@end
