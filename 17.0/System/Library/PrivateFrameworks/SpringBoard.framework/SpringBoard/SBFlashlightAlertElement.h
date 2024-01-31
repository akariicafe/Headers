@class NSString;
@protocol SAAlertHosting;

@interface SBFlashlightAlertElement : SBFlashlightElement <SAAlertBehavior>

@property (weak, nonatomic) id<SAAlertHosting> alertHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flashlightUnavailableAlert;

- (void).cxx_destruct;
- (BOOL)hasAlertBehavior;

@end
