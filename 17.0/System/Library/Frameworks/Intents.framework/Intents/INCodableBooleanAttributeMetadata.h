@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (copy, nonatomic) NSNumber *defaultValue;
@property (copy, nonatomic) NSString *falseDisplayName;
@property (copy, nonatomic) NSString *falseDisplayNameID;
@property (copy, nonatomic) NSString *trueDisplayName;
@property (copy, nonatomic) NSString *trueDisplayNameID;
@property (readonly, copy, nonatomic) NSString *localizedTrueDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedFalseDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)initWithCoder:(id)a0;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionFalseDisplayNameIDKey;
- (id)__INCodableDescriptionFalseDisplayNameKey;
- (id)__INCodableDescriptionTrueDisplayNameIDKey;
- (id)__INCodableDescriptionTrueDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameKey;
- (id)localizedFalseDisplayNameWithLocalizer:(id)a0;
- (id)localizedTrueDisplayNameWithLocalizer:(id)a0;

@end
