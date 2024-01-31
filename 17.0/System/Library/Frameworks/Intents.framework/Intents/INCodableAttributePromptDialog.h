@interface INCodableAttributePromptDialog : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (unsigned long long)hash;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
