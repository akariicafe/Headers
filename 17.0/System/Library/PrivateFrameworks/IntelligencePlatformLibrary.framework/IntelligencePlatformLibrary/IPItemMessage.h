@class NSData;

@interface IPItemMessage : NSObject <NSCopying>

@property (class, readonly, nonatomic) unsigned short itemIdentifier;
@property (class, readonly, nonatomic) unsigned short messageIdentifier;

@property (readonly, nonatomic) NSData *innerData;

+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)a0;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (id)itemMessageForMessageIdentifier:(unsigned short)a0 data:(id)a1 error:(id *)a2;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)a0;

- (unsigned long long)hash;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)jsonDict;
- (id)data;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)a0 forParentField:(id)a1 isRepeatedSubMessage:(BOOL)a2 repeatedSubMessageIndex:(unsigned int)a3 usingBlock:(id /* block */)a4;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
