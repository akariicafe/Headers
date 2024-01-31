@interface JEBrotliDecoder : NSObject

@property (readonly, nonatomic) struct BrotliDecoderStateStruct { } *decoder;

- (id)init;
- (void)dealloc;
- (long long)decompressStreamWithAvailableIn:(unsigned long long *)a0 nextIn:(const char **)a1 availableOut:(unsigned long long *)a2 nextOut:(char **)a3;

@end
