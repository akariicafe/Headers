@class NSString;

@interface HUTemperatureColorWheelSpace : NSObject <HUColorWheelSpace>

@property (class, readonly, nonatomic) struct { double x0; double x1; } defaultTemperatureRange;
@property (class, readonly, nonatomic) struct { double x0; double x1; } largestAllowableTemperatureRange;

@property (readonly, nonatomic) struct { double minimum; double maximum; } supportedRange;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long mirroringBiasAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
