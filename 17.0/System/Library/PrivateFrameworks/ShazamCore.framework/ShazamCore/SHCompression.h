@interface SHCompression : NSObject

+ (BOOL)decompressFile:(id)a0 withAlgorithm:(int)a1 toLocation:(id)a2 error:(id *)a3;
+ (int)supportedCompressionTypeFromFilePathExtension:(id)a0;
+ (int)supportedCompressionTypeFromFileURL:(id)a0;

@end
