@class NSArray, NSString, PSSpecifier;

@interface AXUISettingsTouchAccommodationsController : AXUISettingsBaseListController <AXUISettingsEditableTableCellWithStepperDelegate>

@property (retain, nonatomic) NSArray *tapTimeoutSpecifiers;
@property (retain, nonatomic) PSSpecifier *holdDurationPickerSpecifier;
@property (retain, nonatomic) PSSpecifier *ignoreRepeatPickerSpecifier;
@property (retain, nonatomic) NSArray *swipeGesturesSpecifiers;
@property (nonatomic) BOOL touchAccommodationsEnabled;
@property (readonly, nonatomic) BOOL touchAccommodationsAreConfigured;
@property (nonatomic) BOOL touchAccommodationsHoldDurationEnabled;
@property (nonatomic) BOOL touchAccommodationsIgnoreRepeatEnabled;
@property (nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;
@property (nonatomic) double touchAccommodationsHoldDuration;
@property (nonatomic) double touchAccommodationsIgnoreRepeatDuration;
@property (nonatomic) double touchAccommodationsTapActivationTimeout;
@property (nonatomic) long long touchAccommodationsTapActivationMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (double)valueForSpecifier:(id)a0;
- (double)maximumValueForSpecifier:(id)a0;
- (double)minimumValueForSpecifier:(id)a0;
- (void)specifier:(id)a0 setValue:(double)a1;
- (double)stepValueForSpecifier:(id)a0;
- (id)stringValueForSpecifier:(id)a0;
- (id)_durationSpecifiersWithName:(id)a0 groupIdentifier:(id)a1 footerText:(id)a2 set:(SEL)a3 get:(SEL)a4 previousSpecifierIdentifier:(id)a5 conditionalSpecifiers:(id)a6;
- (id)_holdDurationEnabled:(id)a0;
- (id)_holdDurationSpecifiers;
- (id)_ignoreRepeatEnabled:(id)a0;
- (id)_ignoreRepeatSpecifiers;
- (void)_setHoldDurationEnabled:(id)a0 specifier:(id)a1;
- (void)_setIgnoreRepeatEnabled:(id)a0 specifier:(id)a1;
- (BOOL)_shouldShowSwipeGesturesSpecifiersWithHoldDuration;
- (BOOL)_shouldShowSwipeGesturesSpecifiersWithTapAssistance;
- (void)_showOrHideTapTimeoutAnimated:(BOOL)a0;
- (id)_swipeGesturesEnabled:(id)a0;
- (id)_swipeGesturesSpecifiers;
- (id)_tapActivationMethodSpecifiers;
- (void)_updateDelayPickerSpecifier:(id)a0 additionalSpecifiers:(id)a1 afterSpecifierWithIdentifier:(id)a2 enabled:(BOOL)a3;
- (void)_updateMasterSwitchFooterText;
- (void)_updateMasterSwitchFooterTextForSpecifier:(id)a0 shouldReload:(BOOL)a1;
- (void)_updateSwipeGesturesSpecifiers;
- (id)activationMethod:(id)a0;
- (id)holdDuration:(id)a0;
- (id)ignoreRepeat:(id)a0;
- (void)setTouchAccommodationsEnabled:(id)a0 specifier:(id)a1;
- (id)touchAccommodationsEnabled:(id)a0;
- (Class)touchAccomodationsSwipeGestureViewControllerClass;

@end
