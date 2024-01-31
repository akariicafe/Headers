@interface POError : NSError

+ (id)internalErrorWithMessage:(id)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;

@end
