@interface INCodableScalarAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (Class)objectClass;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INTypeCodableDescriptionKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (unsigned long long)hash;
- (id)__INCodableDescriptionKey;
- (long long)valueType;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (Class)resolutionResultClass;
- (id)__INIntentResponseCodableDescriptionKey;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;
- (id)initWithPropertyName:(id)a0 type:(long long)a1;

@end
