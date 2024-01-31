@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL isActiveDevice;
@property (nonatomic) BOOL isThisDevice;
@property (nonatomic) BOOL isCompanionDevice;
@property (nonatomic) BOOL isAutoMeCapable;
@property (copy, nonatomic) NSString *idsDeviceId;

+ (id)deviceWithId:(id)a0 name:(id)a1 idsDeviceId:(id)a2 isActive:(BOOL)a3 isThisDevice:(BOOL)a4 isCompanionDevice:(BOOL)a5 isAutoMeCapable:(BOOL)a6;

- (unsigned long long)hash;
- (void)updateIsActive:(BOOL)a0 isThisDevice:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
