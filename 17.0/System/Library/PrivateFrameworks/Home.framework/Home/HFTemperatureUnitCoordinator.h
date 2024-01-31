@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL isCelsius;

+ (id)sharedCoordinator;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)setIsCelsius:(BOOL)a0;
- (void)_temperatureUnitDidChange;
- (void)_updateIsCelsiusNotifyingObservers:(BOOL)a0;

@end
