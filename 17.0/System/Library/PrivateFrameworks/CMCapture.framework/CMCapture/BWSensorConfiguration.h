@class NSString, NSDictionary, CMIModuleCalibration;

@interface BWSensorConfiguration : NSObject

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *sensorIDString;
@property (readonly, nonatomic) NSDictionary *sensorIDDictionary;
@property (readonly, nonatomic) NSDictionary *cameraInfo;
@property (readonly, nonatomic) CMIModuleCalibration *moduleCalibration;

- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)a0 sensorIDString:(id)a1 sensorIDDictionary:(id)a2 cameraInfo:(id)a3;
- (id)initWithPortType:(id)a0 sensorIDString:(id)a1 sensorIDDictionary:(id)a2 cameraInfo:(id)a3 moduleCalibration:(id)a4;

@end
