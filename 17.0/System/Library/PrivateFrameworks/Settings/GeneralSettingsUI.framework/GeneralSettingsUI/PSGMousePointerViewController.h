@interface PSGMousePointerViewController : PSListController

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)specifiers;
- (void)pointerDevicesDidChange;
- (id)secondaryClick:(id)a0;
- (id)naturalScrolling:(id)a0;
- (void)setNaturalScrolling:(id)a0 specifier:(id)a1;
- (void)setSecondaryClick:(id)a0 specifier:(id)a1;
- (void)setTapToClick:(id)a0 specifier:(id)a1;
- (void)setTrackingSpeed:(id)a0 specifier:(id)a1;
- (void)setTwoFingerSecondaryClick:(id)a0 specifier:(id)a1;
- (id)tapToClick:(id)a0;
- (id)trackingSpeed:(id)a0;
- (id)twoFingerSecondaryClick:(id)a0;

@end
