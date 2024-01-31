@class NSString, NSArray, INCodableAttribute, NSNumber;

@interface INIntentCodableDescription : INRootCodableDescription <INWidgetPlistRepresentable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName;
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocID;
@property (copy, nonatomic) NSString *descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isDeprecated) BOOL deprecated;
@property (nonatomic, getter=isConfigurable) BOOL configurable;
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (retain, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSNumber *versioningHash;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSArray *entityVerbs;

+ (id)__UserConfirmationRequiredKey;
+ (id)__ClassNameKey;
+ (id)__ParameterKey;
+ (id)__VerbAssociationsKey;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (id)__TitleIDKey;
+ (id)_intentClassNameWithDictionary:(id)a0;
+ (id)__ClassPrefixKey;
+ (id)__ConfigurableKey;
+ (id)__ForegroundKey;
+ (id)__TitleKey;
+ (id)__EntityKey;
+ (id)__PhrasesKey;
+ (id)__HashKey;
+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__KeyParameterKey;
+ (id)__DescriptionKey;
+ (id)__DefaultImageNameKey;
+ (id)__DeprecatedKey;
+ (id)__InputKey;
+ (id)__DescriptionIDKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__Key;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__ParametersKey;
+ (id)__CategoryKey;
+ (id)__VerbKey;
+ (id)__SummaryKey;

- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)attributes;
- (id)_attributesKey;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_attributeKey;
- (long long)codableDescriptionType;
- (id)_ignoredAttributeTags;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_updateWithIntentCodableDescription:(id)a0;
- (id)localizedDescriptiveTextWithLocalizer:(id)a0;
- (id)localizedTitleWithLocalizer:(id)a0;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)a0;

@end
