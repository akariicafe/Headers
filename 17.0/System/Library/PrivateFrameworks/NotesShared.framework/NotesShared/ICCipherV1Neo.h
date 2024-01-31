@interface ICCipherV1Neo : NSObject

+ (id)decrypt:(id)a0 withCipherKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)encrypt:(id)a0 withCipherKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)keyForPassphrase:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 error:(id *)a3;
+ (id)unwrap:(id)a0 withWrapper:(id)a1 error:(id *)a2;
+ (id)wrap:(id)a0 withWrapper:(id)a1 error:(id *)a2;

@end
