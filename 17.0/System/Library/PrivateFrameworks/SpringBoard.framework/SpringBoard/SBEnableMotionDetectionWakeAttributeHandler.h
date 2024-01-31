@interface SBEnableMotionDetectionWakeAttributeHandler : BLSHLocalCountingAssertionAttributeHandler

+ (id)attributeClasses;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (void)deactivateWithFinalEntry:(id)a0;

@end
