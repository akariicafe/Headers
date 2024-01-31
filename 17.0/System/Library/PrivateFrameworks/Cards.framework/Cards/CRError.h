@interface CRError : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1 underlyingError:(id)a2 userInfo:(id)a3;

@end
