@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, copy, nonatomic) NSString *className;

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
- (void)setClassName:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (Class)resolutionResultClass;
- (id)__INIntentResponseCodableDescriptionKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;

@end
