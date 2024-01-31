@class INIntentResponseCodableDescription, NSString, NSArray;

@interface INIntentResponseCodableCode : NSObject <INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableDescription:) INIntentResponseCodableDescription *_codableDescription;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringLocID;
@property (copy, nonatomic) NSString *conciseFormatString;
@property (copy, nonatomic) NSString *conciseFormatStringLocID;
@property (readonly, nonatomic) NSArray *parameterNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
- (id)_parameterNamesFromString:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringIDKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionConciseFormatStringKey;
- (id)__INCodableDescriptionSuccessKey;
- (id)dictionaryRepresentation;
- (id)__INCodableDescriptionNameKey;
- (id)initWithCoder:(id)a0;

@end
