@class NSString, NSData, PKPartialShareInvitation;

@interface PKSharingMessageExtensionRelayServerLocalProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPartialShareInvitation *partialInvite;
@property (nonatomic) BOOL hasCheckedStatus;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSData *analyticsSessionToken;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSharingMessageExtensionRelayServerLocalProperties:(id)a0;

@end
