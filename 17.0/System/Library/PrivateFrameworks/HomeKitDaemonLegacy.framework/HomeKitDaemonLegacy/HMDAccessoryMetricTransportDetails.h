@class NSString;

@interface HMDAccessoryMetricTransportDetails : HMFObject

@property (copy, nonatomic) NSString *accessoryProtocol;
@property (nonatomic) BOOL isAccessoryBatteryPowered;
@property (nonatomic) BOOL isAccessoryBridged;
@property (nonatomic) BOOL isThreadAccessory;
@property (nonatomic) BOOL isHH2Enabled;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)a0;

@end
