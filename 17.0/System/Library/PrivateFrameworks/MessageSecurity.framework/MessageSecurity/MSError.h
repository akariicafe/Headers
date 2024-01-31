@interface MSError : NSError

+ (id)MSErrorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4;
+ (id)MSErrorWithDomain:(id)a0 code:(long long)a1 underlyingError:(id)a2 description:(id)a3;
+ (id)MSErrorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4 arguments:(char *)a5;

@end
