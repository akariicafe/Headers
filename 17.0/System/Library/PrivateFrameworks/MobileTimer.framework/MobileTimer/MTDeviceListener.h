@class NSString;
@protocol NAScheduler;

@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (retain, nonatomic) id<NAScheduler> workScheduler;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
+ (id)sharedDeviceListener;
+ (BOOL)hasBeenUnlockedSinceBoot;

- (void)printDiagnostics;
- (id)init;
- (id)gatherDiagnostics;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void).cxx_destruct;
- (BOOL)_hasBeenUnlockedSinceBoot;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;

@end
