@class NSData;

@interface SAMLPGPData : SAMLBaseElement

@property (readonly, nonatomic) NSData *keyId;
@property (readonly, nonatomic) NSData *packet;

+ (id)createElement:(id *)a0;

@end
