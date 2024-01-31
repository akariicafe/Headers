@interface PBFCompressionHelper : NSObject

+ (int)unTarFileWithFd:(id)a0 toPath:(id)a1;
+ (BOOL)unarchiveFileAtURL:(id)a0 toURL:(id)a1;
+ (int)unpackageTarData:(void *)a0 size:(unsigned long long)a1 parentDir:(const char *)a2;

@end
