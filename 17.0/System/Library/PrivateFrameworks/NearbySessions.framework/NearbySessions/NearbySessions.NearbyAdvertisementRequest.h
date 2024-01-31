@class NSString;

@interface NearbySessions.NearbyAdvertisementRequest : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ invitation;
    void /* unknown type, empty encoding */ route;
    void /* unknown type, empty encoding */ activityType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
