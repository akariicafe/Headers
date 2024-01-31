@class NSString;

@interface IPAppCustomContactNameContent : IPItemMessage

@property (readonly, nonatomic) NSString *vocabularyString;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;

+ (unsigned short)itemIdentifier;
+ (unsigned short)messageIdentifier;
+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)a0;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)a0;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (id)initWithVocabularyString:(id)a0 vocabularyIdentifier:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
