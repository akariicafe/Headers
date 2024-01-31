@interface INCodablePersonAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INTypeCodableDescriptionKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)initWithCoder:(id)a0;

@end
