@class NSString;

@interface SBHSpecialWidgetDescriptor : CHSWidgetDescriptor {
    NSString *_displayName;
    NSString *_description;
}

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)sbh_supportsRemovableBackground;
- (id)succinctDescriptionBuilder;
- (id)backgroundColor;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (BOOL)sbh_supportsRemovableBackgroundOrAccessoryFamilies;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)sbh_canBeAddedToStack;
- (id)initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (id)widgetDescription;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)accentColor;
- (BOOL)isEqual:(id)a0;
- (id)displayName;
- (id)initWithCoder:(id)a0;

@end
