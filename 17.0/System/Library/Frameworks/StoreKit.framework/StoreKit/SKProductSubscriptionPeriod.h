@interface SKProductSubscriptionPeriod : NSObject {
    id _internal;
}

@property (readonly, nonatomic) unsigned long long numberOfUnits;
@property (readonly, nonatomic) unsigned long long unit;

- (void)_setUnit:(unsigned long long)a0;
- (id)init;
- (void)_setNumberOfUnits:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithISO8601String:(id)a0;

@end
