@class NSString;

@interface CoreRepairHelper : NSObject <CoreRepairHelperProtocol, setupModuleChallengeCallBack>

@property BOOL factoryServiceOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)seal:(id)a0 withReply:(id /* block */)a1;
- (BOOL)_mount:(const char *)a0 withFlag:(int)a1;
- (void)daemonControl:(id)a0 withReply:(id /* block */)a1;
- (void)setupModuleChallengeCallBack:(struct __AMFDR { } *)a0;

@end
