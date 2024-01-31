@class NSString, INCodableEnum;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INCodableEnum *codableEnum;
@property (copy, nonatomic) NSString *enumNamespace;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (Class)objectClass;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (unsigned long long)hash;
- (long long)valueType;
- (void)encodeWithCoder:(id)a0;
- (Class)resolutionResultClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_attributeType;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INCodableDescriptionEnumTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
- (Class)_relationshipValueTransformerClass;
- (id)valueWithName:(id)a0;

@end
