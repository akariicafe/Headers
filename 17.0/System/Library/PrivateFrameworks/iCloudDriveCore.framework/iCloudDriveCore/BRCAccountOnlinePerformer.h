@class BRCThrottler, NSString, NSObject, BRDSIDString;
@protocol OS_dispatch_queue;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {
    BRDSIDString *_dsid;
    NSObject<OS_dispatch_queue> *_queue;
    BRCThrottler *_throttler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)addPerformer:(id)a0;
+ (void)removePerformer:(id)a0;

- (void)_close;
- (id)initWithDSID:(id)a0;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)perform;
- (void).cxx_destruct;
- (id)_key;
- (void)resumeAndAutoClose;

@end
