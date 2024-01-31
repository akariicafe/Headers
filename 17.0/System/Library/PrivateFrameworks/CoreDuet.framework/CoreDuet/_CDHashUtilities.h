@interface _CDHashUtilities : NSObject

+ (id)sha1ForString:(id)a0;
+ (id)md5ForData:(id)a0;
+ (id)sha256Hash:(id)a0 withSalt:(id)a1;
+ (id)sha1ForData:(id)a0;
+ (id)md5ForObjectDescription:(id)a0;
+ (id)md5forDictionary:(id)a0 error:(id *)a1;
+ (id)md5ForString:(id)a0;
+ (id)hexStringFromData:(id)a0;

@end
