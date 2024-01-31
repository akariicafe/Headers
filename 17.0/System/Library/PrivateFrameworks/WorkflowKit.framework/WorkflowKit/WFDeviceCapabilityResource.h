@interface WFDeviceCapabilityResource : WFResource

+ (BOOL)mustBeAvailableForDisplay;

- (BOOL)isMobileGestaltBasedCapability;
- (void)refreshAvailability;
- (id)unavailableResourceError;

@end
