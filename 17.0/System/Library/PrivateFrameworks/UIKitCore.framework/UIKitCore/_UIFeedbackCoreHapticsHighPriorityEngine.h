@interface _UIFeedbackCoreHapticsHighPriorityEngine : _UIFeedbackCoreHapticsEngine

+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (id)sharedEngine;
+ (id)_additionalEngineOptions;

- (id)_internal_createCoreHapticsEngine;

@end
