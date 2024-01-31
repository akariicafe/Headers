@interface NFHardwareControllerInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long siliconVersion;
@property (readonly, nonatomic) unsigned long long siliconName;
@property (readonly, nonatomic) unsigned long long ROMVersion;
@property (readonly, nonatomic) unsigned long long firmwareVersion;
@property (readonly, nonatomic) unsigned long long firmwareRevision;
@property (readonly, nonatomic) unsigned long long middlewareVersion;
@property (readonly, nonatomic) BOOL hasAntenna;
@property (readonly, nonatomic) BOOL hasIcfResistor;
@property (readonly, nonatomic) BOOL hasMFW;
@property (readonly, nonatomic) BOOL hasHLMSupport;
@property (readonly, nonatomic) BOOL hasLPEMSupport;
@property (readonly, nonatomic) BOOL poweredRunDuringSleep;
@property (readonly, nonatomic) BOOL hasCarKeySupport;
@property (readonly, nonatomic) BOOL hasReaderModeSupport;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;

@end
