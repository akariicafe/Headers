@interface DERDecoder : NSObject

+ (id)DecodeItem:(id)a0 outTag:(unsigned long long *)a1 outError:(id *)a2;
+ (id)DecodeSequence:(id)a0 specification:(id)a1 unordered:(BOOL)a2 ignoreUnknownTags:(BOOL)a3 outError:(id *)a4;
+ (id)dataWithSource:(id)a0 item:(const struct { char *x0; unsigned long long x1; } *)a1;

@end
