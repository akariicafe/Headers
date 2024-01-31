@interface MapsUI.MUEVChargerAvailabilityProvider : NSObject <MapsUI.EVChargerAvailabilityDownloaderDelegate, VGVirtualGarageObserver> {
    void /* unknown type, empty encoding */ evCharger;
    void /* unknown type, empty encoding */ availabilityRefresher;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ virtualGarageService;
    void /* unknown type, empty encoding */ virtualGarage;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ availability;
@property (nonatomic) void /* unknown type, empty encoding */ isActive;

- (void)virtualGarageDidUpdate:(id)a0;
- (void)didDownloadEVChargerAvailabilityWithEvCharger:(id)a0;
- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlaceItem:(id)a0 canAccessVirtualGarage:(BOOL)a1;

@end
