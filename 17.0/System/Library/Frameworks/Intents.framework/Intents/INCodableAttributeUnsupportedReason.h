@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

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
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (unsigned long long)hash;
- (id)__INCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionCodeKey;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INTypeCodableDescriptionCodeKey;

@end
