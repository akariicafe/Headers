@class NSSet;

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSSet *disabledServices;

- (id)init;
- (void)disableService:(id)a0;
- (void)enableService:(id)a0;

@end
