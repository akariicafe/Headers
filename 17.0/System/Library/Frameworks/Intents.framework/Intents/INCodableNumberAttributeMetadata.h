@class NSNumber, NSString;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) BOOL supportsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)initWithCoder:(id)a0;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)_localizedDialogTokensWithLocalizer:(id)a0;

@end
