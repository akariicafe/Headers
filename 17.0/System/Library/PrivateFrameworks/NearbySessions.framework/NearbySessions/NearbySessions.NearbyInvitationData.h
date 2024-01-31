@class NSString;

@interface NearbySessions.NearbyInvitationData : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ invitationID;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ hostConnectionInfo;
    void /* unknown type, empty encoding */ sourceProviderID;
    void /* unknown type, empty encoding */ sourceProviderName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
