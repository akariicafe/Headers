@class UIFont, NSString, SBUILegibilityView, _UILegibilitySettings;

@interface SBLockScreenTimerDialView : UIView <SBUILegibility> {
    SBUILegibilityView *_dialView;
}

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
