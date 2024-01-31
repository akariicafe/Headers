@class BSMutableIntegerMap;

@interface SBSHardwareButtonService : SBSAbstractSystemService

@property (retain, nonatomic) BSMutableIntegerMap *consumersPerKind;
@property (retain, nonatomic) BSMutableIntegerMap *buttonConfigurationsPerKind;
@property (retain, nonatomic) BSMutableIntegerMap *requestHIDAssertionsPerKind;

+ (id)sharedInstance;

- (void)fetchHapticTypeForButtonKind:(long long)a0 completion:(id /* block */)a1;
- (void)setHapticType:(long long)a0 forButtonKind:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (long long)toggleStateForButtonKind:(long long)a0;
- (id)deferHIDEventsForButtonKind:(long long)a0 toToken:(id)a1;
- (void)_addEventConsumerInfo:(id)a0;
- (void)_mainQueue_handleButtonPressMessage:(long long)a0 forButtonKind:(long long)a1 priority:(long long)a2;
- (void)_resetEventMaskForButtonKind:(long long)a0;
- (void)_setApplicationClientEventMask:(unsigned long long)a0 buttonKind:(long long)a1 priority:(long long)a2;
- (id)_viableConsumerForButtonKind:(long long)a0 event:(long long)a1 priority:(long long)a2;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)a0 completion:(id /* block */)a1;
- (id)beginConsumingPressesForButtonKind:(long long)a0 eventConsumer:(id)a1 priority:(long long)a2;
- (void)consumerInfoWillInvalidate:(id)a0;
- (void)handleButtonPressMessage:(long long)a0 forButtonKind:(long long)a1 priority:(long long)a2;

@end
