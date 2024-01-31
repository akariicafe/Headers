@class NSString;

@interface IRAVOutputDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasAirplayProperties;
@property (readonly, nonatomic) BOOL discoveredOverInfra;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long deviceSubType;

+ (id)AVOutputDeviceToDO:(id)a0;
+ (id)aVOutputDeviceDOWithDeviceID:(id)a0 modelID:(id)a1 deviceName:(id)a2 hasAirplayProperties:(BOOL)a3 discoveredOverInfra:(BOOL)a4 deviceType:(unsigned long long)a5 deviceSubType:(unsigned long long)a6;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementDeviceID:(id)a0;
- (id)copyWithReplacementDeviceName:(id)a0;
- (id)copyWithReplacementDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementDiscoveredOverInfra:(BOOL)a0;
- (id)copyWithReplacementHasAirplayProperties:(BOOL)a0;
- (id)copyWithReplacementModelID:(id)a0;
- (id)exportAsDictionary;
- (id)initWithDeviceID:(id)a0 modelID:(id)a1 deviceName:(id)a2 hasAirplayProperties:(BOOL)a3 discoveredOverInfra:(BOOL)a4 deviceType:(unsigned long long)a5 deviceSubType:(unsigned long long)a6;
- (BOOL)isEqualToAVOutputDeviceDO:(id)a0;

@end
