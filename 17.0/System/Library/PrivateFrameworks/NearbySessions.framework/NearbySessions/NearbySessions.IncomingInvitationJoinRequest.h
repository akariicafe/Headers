@class NSString;

@interface NearbySessions.IncomingInvitationJoinRequest : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ invitationID;
    void /* unknown type, empty encoding */ remotePseudonym;
    void /* unknown type, empty encoding */ remotePublicKey;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ destinationToken;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ hostInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
