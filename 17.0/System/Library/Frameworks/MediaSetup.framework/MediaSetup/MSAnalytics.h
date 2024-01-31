@interface MSAnalytics : NSObject

+ (void)sendPlayIntent:(BOOL)a0;
+ (void)sendDefaultServiceChangedEvent:(id)a0;
+ (void)sendSetupEvent:(id)a0;
+ (void)sendConfigEvent:(id)a0;
+ (void)sendPrimaryUserUpdatedOn:(id)a0;
+ (void)sendRemovalEvent:(id)a0;
+ (void)sendServiceEvent:(id)a0;
+ (void)sendServiceRequestLapseEvent:(id)a0;
+ (void)sendUserRegisteredNumberOfServices:(int)a0;

@end
