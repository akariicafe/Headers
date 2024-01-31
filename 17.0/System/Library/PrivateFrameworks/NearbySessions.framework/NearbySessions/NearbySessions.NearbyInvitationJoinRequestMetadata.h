@class NSString;

@interface NearbySessions.NearbyInvitationJoinRequestMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ publicKey;
    void /* unknown type, empty encoding */ pseudonym;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
