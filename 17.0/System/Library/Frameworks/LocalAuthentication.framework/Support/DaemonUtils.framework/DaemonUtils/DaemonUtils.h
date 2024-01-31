@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)callerIsAllowedNonUiExtension:(id)a0;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (BOOL)deviceHasSEP;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (BOOL)deviceHasTouchID;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (BOOL)deviceHasSpecialTouchID;
+ (BOOL)deviceIsPoseidon;
+ (BOOL)isSpecialUiAvailable;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;

@end
