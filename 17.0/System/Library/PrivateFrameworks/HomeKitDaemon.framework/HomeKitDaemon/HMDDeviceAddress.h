@class NSUUID, NSString;

@interface HMDDeviceAddress : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *idsIdentifier;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;

+ (id)addressWithIDSIdentifier:(id)a0 idsDestination:(id)a1;
+ (id)localDeviceIDSIdentifier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIDSIdentifier:(id)a0 idsDestination:(id)a1;
- (BOOL)isEquivalentToDeviceAddress:(id)a0;

@end
