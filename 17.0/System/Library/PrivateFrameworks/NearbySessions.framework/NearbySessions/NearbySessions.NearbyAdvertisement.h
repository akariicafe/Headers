@class NSString;

@interface NearbySessions.NearbyAdvertisement : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ activityType;
    void /* unknown type, empty encoding */ contactID;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
