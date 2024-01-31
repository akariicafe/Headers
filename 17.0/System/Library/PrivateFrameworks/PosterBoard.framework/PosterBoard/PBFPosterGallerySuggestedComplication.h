@class NSString, INIntent;

@interface PBFPosterGallerySuggestedComplication : NSObject <CHSWidgetPersonality, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) long long widgetFamily;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestedComplicationWithDictionaryRepresentation:(id)a0 error:(id *)a1;

- (BOOL)matchesPersonality:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3 intent:(id)a4 source:(long long)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProactiveRepresentation:(id)a0;
- (id)proactiveRepresentation;

@end
