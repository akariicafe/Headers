@interface SYSerializationSupport : NSObject

+ (id)archiveDataFromData:(id)a0 formatIdentifier:(unsigned int)a1 majorVersion:(unsigned char)a2 minorVersion:(unsigned char)a3;
+ (id)archiveDataFromItemData:(id)a0;
+ (id)itemDataFromArchiveData:(id)a0 majorVersion:(long long *)a1 minorVersion:(long long *)a2 error:(id *)a3;

@end
