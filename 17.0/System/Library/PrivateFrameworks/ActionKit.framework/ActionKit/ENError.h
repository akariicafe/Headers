@interface ENError : NSObject

+ (id)errorFromException:(id)a0;
+ (id)connectionFailedError;
+ (id)localizedDescriptionForENErrorCode:(long long)a0;
+ (id)noteSizeLimitReachedError;
+ (long long)sanitizedErrorCodeFromEDAMErrorCode:(int)a0;

@end
