@interface _GDSHMACGenerator : NSObject

+ (id)HMACSignedRequest:(id)a0 secret:(id)a1 secretVersion:(id)a2;
+ (id)SHA256_HashStringFromData:(id)a0;
+ (id)HMAC_SHA256Digest:(id)a0 key:(id)a1;
+ (id)bucketedEpochTimeStamp;
+ (id)encodeStringToBase64:(id)a0;
+ (id)generateURLRequest:(id)a0 secretVersion:(id)a1 signature:(id)a2 content:(id)a3 timestamp:(id)a4;

@end
