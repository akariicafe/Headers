@interface ActivationMapTools : NSObject

+ (id)characterCentroidsFromActivationMap:(const void *)a0 codeMap:(const int *)a1 decodedSymbolIndexes:(id *)a2;
+ (id)characterCentroidsFromActivationMap:(void *)a0 codeMap:(const int *)a1 potentialPatterns:(id)a2 minWordLengthFractionForCorrelationPeak:(float)a3 bestModelIndex:(long long *)a4;
+ (int)colInImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 forPoint:(int)a1 inActivationMapWithSize:(int)a2;
+ (id)decodeStringWithCentroids:(id)a0 activationMap:(const void *)a1 codeMap:(const int *)a2 model:(id)a3;
+ (void)extractActivationSignals:(void *)a0 fromActivationMap:(const void *)a1 forModel:(id)a2 codeMap:(const int *)a3;
+ (id)fitSpacingModel:(id)a0 toActivationMap:(const void *)a1 codeMap:(const int *)a2 minWordLengthFractionForCorrelationPeak:(float)a3 cost:(float *)a4;
+ (BOOL)matchLabel:(int)a0 toModelCharacter:(unsigned short)a1;
+ (id)textFromActivationMap:(void *)a0 codeMap:(const int *)a1 invert:(BOOL)a2;

@end
