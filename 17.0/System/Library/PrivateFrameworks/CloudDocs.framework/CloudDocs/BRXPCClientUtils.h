@interface BRXPCClientUtils : NSObject

+ (BOOL)executeXPCWithMaxRetries:(unsigned long long)a0 error:(id *)a1 block:(id /* block */)a2;

@end
