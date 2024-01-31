@interface CRXFCryptoFunctions : NSObject

+ (BOOL)cryptFromText:(id)a0 withPassword:(id)a1 toText:(id *)a2 encrypt:(BOOL)a3 error:(id *)a4;
+ (BOOL)decryptText:(id)a0 withPassword:(id)a1 toString:(id *)a2 error:(id *)a3;
+ (BOOL)encryptText:(id)a0 withPassword:(id)a1 toString:(id *)a2 error:(id *)a3;

@end
