@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject

@property (nonatomic) BOOL triggerArmed;
@property (weak, nonatomic) id<CSNotificationClearingTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL hadNotificationContentAtDisappearance;
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) BOOL uiLocked;
@property (nonatomic) BOOL screenOff;
@property (nonatomic) BOOL screenInactive;

- (BOOL)_shouldFire;
- (void)_clearIfNeeded;
- (void)_reset;
- (void)_updateTriggerAndClearIfNeeded;
- (BOOL)_wouldArmForDiscreteParameters;
- (BOOL)_shouldArm;
- (BOOL)_wouldArmIfNotForDND;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)_wouldArmIfNotForDNDAndNotificationContent;

@end
