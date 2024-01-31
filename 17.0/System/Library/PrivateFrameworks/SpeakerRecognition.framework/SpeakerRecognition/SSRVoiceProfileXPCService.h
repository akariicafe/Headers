@class NSString, SSRVoiceProfileXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileXPCService : NSObject <SSRVoiceProfileXPCClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SSRVoiceProfileXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (id)init;
- (void)_teardownXPCClientIfNeeded;
- (void).cxx_destruct;
- (id)_createXPCClientConnectionIfNeeded:(id)a0;
- (void)fetchEnrollmentStatusForSiriProfileId:(id)a0 forLanguageCode:(id)a1 completion:(id /* block */)a2;
- (void)ssrVoiceProfileXPCClient:(id)a0 didDisconnect:(BOOL)a1;

@end
