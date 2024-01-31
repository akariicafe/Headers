@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) BOOL disableAutocorrect;
@property (nonatomic) BOOL disableSmartDashes;
@property (nonatomic) BOOL disableSmartQuotes;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *defaultValueID;
@property (nonatomic) long long capitalization;
@property (readonly, copy, nonatomic) NSString *localizedDefaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionCapitalizationKey;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionDisableSmartQuotesKey;

@end
