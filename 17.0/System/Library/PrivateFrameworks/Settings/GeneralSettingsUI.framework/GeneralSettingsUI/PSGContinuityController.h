@class PSSpecifier;

@interface PSGContinuityController : PSListController

@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseGroup;
@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseItem;

- (id)init;
- (void)profileNotification:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)setContinuityEnabled:(id)a0 specifier:(id)a1;
- (id)airPlayReceiverAccessMode:(id)a0;
- (id)airPlayReceiverAccessModePickerSpecifier;
- (id)airPlayReceiverPasswordSpecifiers;
- (id)airPlayReceiverPasswordToggleSpecifier;
- (id)airPlayReceiverSpecifiers;
- (id)airplay:(id)a0;
- (id)airplayPasswordLinkSpecifier;
- (id)isAirPlayReceiverEnabled:(id)a0;
- (id)isAirPlayReceiverPasswordEnabled:(id)a0;
- (id)isContinuityEnabled:(id)a0;
- (BOOL)isContinuityRestricted;
- (id)isLinkKeyboardAndMouseEnabled:(id)a0;
- (id)isWombatEnabled:(id)a0;
- (void)presentAirPlayPasswordAlert;
- (void)removeAirPlayPassword;
- (id)retrieveAirPlayPassword;
- (void)setAirPlayPassword:(id)a0;
- (void)setAirPlayReceiverAccessMode:(id)a0 specifier:(id)a1;
- (void)setAirPlayReceiverEnabled:(id)a0 specifier:(id)a1;
- (void)setAirPlayReceiverPasswordEnabled:(id)a0 specifier:(id)a1;
- (void)setAirplayWithValue:(id)a0 specifier:(id)a1;
- (void)setLinkKeyboardAndMouseEnabled:(id)a0 specifier:(id)a1;
- (void)setWombatEnabled:(id)a0 specifier:(id)a1;
- (void)updateContinuitySpecifiers;

@end
