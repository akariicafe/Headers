@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface FigCaptureImageSensorTemperatureMonitor : NSObject {
    NSString *_portType;
    struct { float min; float max; } _systemPressureLevelByImageSensorTemperature[5];
    int _currentSystemPressureFromImageSensorTemperature;
    NSObject<OS_dispatch_source> *_nominalImageSensorTemperatureMonitorTimer;
}

@property (readonly) int systemPressureLevelFromImageSensorTemperature;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPortType:(id)a0 sensorThermalLevelsByTemperature:(id)a1;
- (void)startMonitoringImageSensorTemperatureUntilNominalWithQueue:(id)a0 changeHandler:(id /* block */)a1;
- (void)updateWithImageSensorTemperature:(float)a0;

@end
