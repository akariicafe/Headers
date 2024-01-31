@class NSData, NSString, NSDictionary;

@interface CRXFCalibrationData : NSObject

@property (readonly, nonatomic) NSData *accPayload;
@property (readonly, nonatomic) NSString *leftCalibrationData;
@property (readonly, nonatomic) NSString *rightCalibrationData;
@property (readonly, nonatomic) NSDictionary *accPayloadsBySerial;

- (void).cxx_destruct;
- (id)initWithACCPayload:(id)a0 leftCalibrationData:(id)a1 rightCalibrationData:(id)a2 accPayloadsBySerial:(id)a3;

@end
