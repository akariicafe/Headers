@class NSString, NSArray, NSError;

@interface MEMessageSecurityInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *decoderID;
@property (readonly, nonatomic) NSArray *signers;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, nonatomic) NSError *signingError;
@property (readonly, nonatomic) NSError *encryptionError;
@property (readonly, nonatomic) BOOL shouldBlockRemoteContent;
@property (readonly, nonatomic) NSString *localizedRemoteContentBlockingReason;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSigners:(id)a0 isEncrypted:(BOOL)a1 signingError:(id)a2 encryptionError:(id)a3;
- (id)initWithSigners:(id)a0 isEncrypted:(BOOL)a1 signingError:(id)a2 encryptionError:(id)a3 shouldBlockRemoteContent:(BOOL)a4 localizedRemoteContentBlockingReason:(id)a5;

@end
