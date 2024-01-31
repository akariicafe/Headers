@class NSString, KVDonateVersionLog;

@interface KVDonateXPCClientFactory : NSObject <KVDonateServiceProvider> {
    KVDonateVersionLog *_versionLog;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (id)versionLog;
- (id)init;
- (void)terminateConnection:(id)a0;
- (void).cxx_destruct;
- (id)makeConnection:(id)a0;

@end
