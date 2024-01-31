@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
    NSString *_manifestPath;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
}

@property (retain, nonatomic) NSMutableDictionary *_userManifest;
@property (readonly, nonatomic) NSString *personID;
@property (nonatomic) BOOL hasDeactivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPersonID:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)_abort;
- (void)_forget;
- (void)_backoffMMCSBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_commitUserManifest;
- (void)_didReceiveMMCSRetryAfterDate:(id)a0;
- (void)_didReceiveStreamsRetryAfterDate:(id)a0;
- (id)_latestNextActivityDate;
- (void)_resetMMCSBackoffTimer;
- (void)_resetStreamsBackoffTimer;
- (void)_updateMasterManifest;
- (void)forget;
- (void)protocol:(id)a0 didReceiveRetryAfterDate:(id)a1;

@end
