@class NSString;

@interface NearbySessions.NearbySessionInvitation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ activityType;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ sourceProviderID;
    void /* unknown type, empty encoding */ sourceProviderName;
    void /* unknown type, empty encoding */ isPublic;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ userInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
