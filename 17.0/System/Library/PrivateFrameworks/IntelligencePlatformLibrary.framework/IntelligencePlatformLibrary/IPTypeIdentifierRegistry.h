@interface IPTypeIdentifierRegistry : NSObject

+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)a0 error:(id *)a1;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (BOOL)isValidFieldIdentifier:(unsigned short)a0;
+ (BOOL)isValidItemIdentifier:(unsigned short)a0;
+ (BOOL)isValidMessageIdentifier:(unsigned short)a0;
+ (unsigned short)itemIdentifierForFieldIdentifier:(unsigned short)a0 error:(id *)a1;
+ (Class)itemMessageSubclassForFieldIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForItemIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForMessageIdentifier:(unsigned short)a0;
+ (unsigned short)messageIdentifierForFieldIdentifier:(unsigned short)a0 error:(id *)a1;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)a0 error:(id *)a1;

@end
