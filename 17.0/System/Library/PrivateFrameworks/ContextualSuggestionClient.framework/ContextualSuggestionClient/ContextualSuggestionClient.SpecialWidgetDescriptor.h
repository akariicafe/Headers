@interface ContextualSuggestionClient.SpecialWidgetDescriptor : CHSWidgetDescriptor

- (id)initWithCoder:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 supportedFamilies:(unsigned long long)a3 intentType:(id)a4;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;
- (id)initWithExtensionIdentity:(id)a0 supportedFamilies:(unsigned long long)a1;

@end
