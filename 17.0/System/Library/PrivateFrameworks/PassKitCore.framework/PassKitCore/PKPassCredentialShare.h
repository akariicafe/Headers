@class NSString;

@interface PKPassCredentialShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *channelTransportIdentifier;
@property (nonatomic) long long targetDevice;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic, getter=isForWatch) BOOL forWatch;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInvitationData:(id)a0;
- (void)updateWithInvitationData:(id)a0;

@end
