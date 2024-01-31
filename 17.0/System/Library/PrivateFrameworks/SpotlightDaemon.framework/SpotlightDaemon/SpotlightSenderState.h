@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences;

- (id)init;
- (void).cxx_destruct;
- (BOOL)clientDisabled:(long long)a0;
- (void)_updateFromPreferences;

@end
