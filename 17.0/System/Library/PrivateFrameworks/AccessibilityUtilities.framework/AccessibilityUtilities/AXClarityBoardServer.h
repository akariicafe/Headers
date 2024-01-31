@class NSString;

@interface AXClarityBoardServer : AXServer <AXSystemAppServer>

@property (class, readonly, nonatomic) BOOL isAvailable;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)server;

- (BOOL)isPasscodeLockVisible;
- (void)pid:(id /* block */)a0;
- (long long)activeInterfaceOrientation;
- (BOOL)isDockVisible;
- (BOOL)dismissSiri;
- (void)rebootDevice;
- (BOOL)isSiriTalkingOrListening;
- (int)pid;
- (void)removeActionHandler:(id)a0;
- (void)_didConnectToClient;
- (void)toggleBackgroundSounds;
- (BOOL)isScreenshotWindowVisible;
- (BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)a0;
- (int)_actionResultKey;
- (BOOL)showControlCenter:(BOOL)a0;
- (BOOL)isNotificationVisible;
- (BOOL)toggleIncomingCall;
- (BOOL)isShelfSwitcherVisible;
- (void)_wasDisconnectedFromClient;
- (BOOL)isNowPlayingUIVisible;
- (BOOL)isSiriVisible;
- (void)wakeUpDeviceIfNecessary;
- (id)_serviceName;
- (BOOL)isStageManagerSwitcherVisible;
- (BOOL)isScreenSaverVisible;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isReceivingAirPlay;
- (BOOL)isControlCenterVisible;
- (BOOL)isSoftwareUpdateUIVisible;
- (void)activeInterfaceOrientation:(id /* block */)a0;
- (BOOL)isAppSwitcherVisible;
- (BOOL)isLockScreenVisible;
- (BOOL)isSystemSleeping;
- (void)isMediaPlayingForApp:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_boolFromReply:(id)a0;
- (long long)_integerFromReply:(id)a0;
- (int)_pidFromReply:(id)a0;
- (void)registerActionHandler:(id /* block */)a0 withIdentifierCallback:(id /* block */)a1;

@end
