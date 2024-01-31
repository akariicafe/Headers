@class NSString;

@interface IPAppCustomContactNameMetaContent : IPItemMessage <IPItemMetaContentMessage>

@property (readonly, nonatomic) NSString *sourceIdentifier;

+ (unsigned short)itemIdentifier;
+ (unsigned short)messageIdentifier;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (id)initWithSourceIdentifier:(id)a0 error:(id *)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
