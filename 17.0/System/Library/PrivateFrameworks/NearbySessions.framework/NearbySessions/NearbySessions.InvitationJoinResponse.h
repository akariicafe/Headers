@class NSString;

@interface NearbySessions.InvitationJoinResponse : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ memberHandles;
    void /* unknown type, empty encoding */ userInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
