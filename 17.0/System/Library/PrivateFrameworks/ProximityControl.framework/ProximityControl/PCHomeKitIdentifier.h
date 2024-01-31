@class NSUUID;

@interface PCHomeKitIdentifier : PCDeviceIdentifier <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accessoryID;
@property (readonly, copy, nonatomic) NSUUID *homeID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryID:(id)a0 homeID:(id)a1;

@end
