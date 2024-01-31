@interface CPError : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1 underlyingError:(id)a2;
+ (id)errorWithCode:(long long)a0;
+ (id)internalErrorWithDescription:(id)a0;
+ (id)internalErrorWithDescription:(id)a0 underlyingError:(id)a1;

@end
