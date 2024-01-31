@interface ICAESCipherUtils : NSObject

+ (id)_ic_decrypt:(id)a0 withCipherKey:(id)a1 standardKeyLength:(unsigned long long)a2 additionalAuthenticatedData:(id)a3 inputTag:(id)a4 standardTagLength:(unsigned long long)a5 inputInitializationVector:(id)a6 standardInitializationVectorLength:(unsigned long long)a7 error:(id *)a8;
+ (id)_ic_encrypt:(id)a0 withCipherKey:(id)a1 standardKeyLength:(unsigned long long)a2 additionalAuthenticatedData:(id)a3 outputTag:(id *)a4 standardTagLength:(unsigned long long)a5 outputInitializationVector:(id *)a6 standardInitializationVectorLength:(unsigned long long)a7 error:(id *)a8;
+ (id)_ic_unwrap:(id)a0 withWrapper:(id)a1 standardKeyLength:(unsigned long long)a2 standardWrappedKeyLength:(unsigned long long)a3 error:(id *)a4;
+ (id)_ic_wrap:(id)a0 withWrapper:(id)a1 standardKeyLength:(unsigned long long)a2 standardWrappedKeyLength:(unsigned long long)a3 error:(id *)a4;

@end
