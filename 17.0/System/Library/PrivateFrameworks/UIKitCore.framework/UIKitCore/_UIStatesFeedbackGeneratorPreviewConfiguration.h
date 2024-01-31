@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)revealState;
+ (id)previewState;
+ (id)cancelState;
+ (id)defaultConfiguration;
+ (id)commitState;

- (BOOL)defaultEnabled;
- (long long)requiredSupportLevel;

@end
