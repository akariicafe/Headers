@class NSString, NSData;

@interface CHSMutableAvocadoDescriptor : CHSAvocadoDescriptor

@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long supportedFamilies;
@property (nonatomic) long long widgetVisibility;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (nonatomic, getter=isTransparent) BOOL transparent;

- (id)initWithCoder:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 supportedFamilies:(unsigned long long)a3 intentType:(id)a4;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;

@end
