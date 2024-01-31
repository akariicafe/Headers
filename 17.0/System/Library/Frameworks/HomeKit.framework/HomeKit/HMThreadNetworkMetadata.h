@class NSString, NSData;

@interface HMThreadNetworkMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char channel;
@property (readonly, nonatomic) NSData *PANID;
@property (readonly, nonatomic) NSData *extendedPANID;
@property (readonly, nonatomic) NSData *masterKey;
@property (readonly, nonatomic) NSString *passPhrase;
@property (readonly, nonatomic) NSData *PSKc;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 channel:(unsigned char)a1 PANID:(id)a2 extendedPANID:(id)a3 masterKey:(id)a4 passPhrase:(id)a5 PSKc:(id)a6;

@end
