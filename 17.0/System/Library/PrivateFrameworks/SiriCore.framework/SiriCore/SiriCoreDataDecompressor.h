@interface SiriCoreDataDecompressor : NSObject

- (id)decompressedDataForData:(id)a0 error:(id *)a1;
- (id)decompressedDataForBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;

@end
