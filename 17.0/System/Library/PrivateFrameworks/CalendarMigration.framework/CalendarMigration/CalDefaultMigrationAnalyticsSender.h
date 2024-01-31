@class NSString;

@interface CalDefaultMigrationAnalyticsSender : NSObject <CalMigrationAnalyticsSender>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sendEvent:(id)a0 withPayload:(id)a1;

@end
