@class NSString;

@interface NearbySessions.NearbyGroupConnectionInfo : NSObject <NSCoding, NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ localMember;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
