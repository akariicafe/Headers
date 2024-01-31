@interface TSPFileManager : NSObject

+ (BOOL)linkFileAtPath:(id)a0 toPath:(id)a1;
+ (BOOL)linkFileAtURL:(id)a0 toURL:(id)a1;
+ (BOOL)linkOrCopyURL:(id)a0 decryptionKey:(id)a1 toURL:(id)a2 encryptionKey:(id)a3;
+ (BOOL)linkOrCopyURL:(id)a0 toURL:(id)a1;

@end
