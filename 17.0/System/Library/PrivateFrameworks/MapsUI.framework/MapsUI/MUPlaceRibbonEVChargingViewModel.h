@class _TtC6MapsUI31MUEVChargerAvailabilityProvider, NSString;

@interface MUPlaceRibbonEVChargingViewModel : MUPlaceRibbonItemViewModel <MapsUI.MUEVChargerAvailabilityProviderObserver>

@property (retain, nonatomic) _TtC6MapsUI31MUEVChargerAvailabilityProvider *availabilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributedStringFromString:(id)a0 color:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateStringProviders;
- (void)evChargerAvailabilityProvider:(id)a0 didUpdateAvailability:(id)a1;
- (id)initWithAvailabilityProvider:(id)a0;

@end
