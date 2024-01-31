@interface MapsUI.MUEVChargingViewModel : NSObject <MapsUI.MUEVChargerAvailabilityProviderObserver> {
    void /* unknown type, empty encoding */ connectedVehiclesSectionGroups;
    void /* unknown type, empty encoding */ otherPlugsSectionGroup;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ availabilityProvider;
    void /* unknown type, empty encoding */ availability;
}

- (void)evChargerAvailabilityProvider:(id)a0 didUpdateAvailability:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
