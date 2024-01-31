@class NSString, NSObject, EDiCloudAliasSupport;
@protocol OS_dispatch_queue;

@interface MFCastleEmailAliasUpdater : NSObject {
    BOOL _isRunning;
    unsigned int _requestCount;
    NSString *_accountID;
    EDiCloudAliasSupport *_aliasSupport;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 aliasSupport:(id)a1;
- (void)getEmailAddressAndAliasesWithLastSyncDate:(id)a0 entityTag:(id)a1 handler:(id /* block */)a2;

@end
