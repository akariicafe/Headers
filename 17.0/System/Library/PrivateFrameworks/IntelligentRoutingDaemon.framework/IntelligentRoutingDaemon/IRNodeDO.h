@class NSString, IRRapportDeviceDO, IRAVOutputDeviceDO;

@interface IRNodeDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *avOutpuDeviceIdentifier;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) IRAVOutputDeviceDO *avOutputDevice;
@property (readonly, nonatomic) IRRapportDeviceDO *rapportDevice;

+ (id)nodeFromNodeDO:(id)a0;
+ (id)nodeDOFromNode:(id)a0;
+ (id)nodeDOWithAvOutpuDeviceIdentifier:(id)a0 rapportIdentifier:(id)a1 idsIdentifier:(id)a2 avOutputDevice:(id)a3 rapportDevice:(id)a4;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)computeName;
- (id)computedIdsIdentifier;
- (id)computedMediaRemoteIdenfifier;
- (id)computedMediaRouteIdentifier;
- (id)copyWithReplacementAvOutpuDeviceIdentifier:(id)a0;
- (id)copyWithReplacementAvOutputDevice:(id)a0;
- (id)copyWithReplacementIdsIdentifier:(id)a0;
- (id)copyWithReplacementRapportDevice:(id)a0;
- (id)copyWithReplacementRapportIdentifier:(id)a0;
- (id)exportAsDictionary;
- (id)initWithAvOutpuDeviceIdentifier:(id)a0 rapportIdentifier:(id)a1 idsIdentifier:(id)a2 avOutputDevice:(id)a3 rapportDevice:(id)a4;
- (BOOL)isEqualToNodeDO:(id)a0;

@end
