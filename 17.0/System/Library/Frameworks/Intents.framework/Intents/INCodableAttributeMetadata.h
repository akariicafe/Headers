@class NSString, INCodableLocalizationTable, INCodableAttribute, INCodableDescription;

@interface INCodableAttributeMetadata : NSObject <INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (readonly, copy, nonatomic) INCodableLocalizationTable *_localizationTable;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *placeholderID;
@property (readonly, copy, nonatomic) NSString *localizedPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionPlaceholderIDKey;
- (id)__INCodableDescriptionPlaceholderKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderKey;
- (id)__INTypeCodableDescriptionPlaceholderIDKey;
- (id)__INTypeCodableDescriptionPlaceholderKey;
- (id)_localizedDialogTokensWithLocalizer:(id)a0;
- (id)initWithName:(id)a0 codableAttribute:(id)a1;
- (id)localizedPlaceholderWithLocalizer:(id)a0;

@end
