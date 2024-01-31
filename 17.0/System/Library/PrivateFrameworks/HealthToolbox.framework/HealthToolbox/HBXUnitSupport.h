@class HKUnitPreferenceController, HKDisplayTypeController;

@interface HBXUnitSupport : NSObject

@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;

- (void).cxx_destruct;
- (id)preferredUnitForType:(id)a0;
- (id)initWithUnitPreferenceController:(id)a0 displayTypeController:(id)a1;
- (id)localizedDisplayNameForUnit:(id)a0 nameContext:(long long)a1;
- (id)localizedPreferredUnitDisplayNameForType:(id)a0 nameContext:(long long)a1;
- (void)updatePreferredUnit:(id)a0 forType:(id)a1;

@end
