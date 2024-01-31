@interface JEBrotliEncoder : NSObject

@property (readonly, nonatomic) struct BrotliEncoderStateStruct { } *encoder;
@property (nonatomic) unsigned int quality;
@property (nonatomic) unsigned int sizeHint;
@property (readonly, nonatomic) BOOL isFinished;

- (id)init;
- (void)dealloc;
- (BOOL)compressStreamWithOperation:(long long)a0 availableIn:(unsigned long long *)a1 nextIn:(const char **)a2 availableOut:(unsigned long long *)a3 nextOut:(char **)a4;

@end
