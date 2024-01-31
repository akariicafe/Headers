@class NSNumber, NSString;

@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFUnitFormatter>

@property (nonatomic) BOOL inputIsCelsius;
@property (nonatomic) BOOL outputIsCelsius;
@property (retain, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *unitDescription;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (id)stringForObjectValue:(id)a0 withUnit:(BOOL)a1;
- (void)setMinimumFractionDigits:(unsigned long long)a0;
- (unsigned long long)maximumFractionDigits;
- (void)setMaximumFractionDigits:(unsigned long long)a0;
- (id)measurementForObjectValue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)minimumFractionDigits;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnit:(BOOL)a1;

@end
