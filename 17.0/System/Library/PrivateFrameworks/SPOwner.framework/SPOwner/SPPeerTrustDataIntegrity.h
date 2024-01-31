@class SPDataIntegrityCheck;

@interface SPPeerTrustDataIntegrity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPDataIntegrityCheck *peerTrustRecord;
@property (copy, nonatomic) SPDataIntegrityCheck *messagingDestination;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPeerTrustRecord:(id)a0 messagingDestination:(id)a1;

@end
