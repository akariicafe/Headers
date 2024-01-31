@interface WFHealthKitResource : WFResource

+ (BOOL)isSingleton;
+ (BOOL)mustBeAvailableForDisplay;

- (void)refreshAvailability;

@end
