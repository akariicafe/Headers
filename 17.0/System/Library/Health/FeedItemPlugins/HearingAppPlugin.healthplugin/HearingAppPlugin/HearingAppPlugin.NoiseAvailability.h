@interface HearingAppPlugin.NoiseAvailability : NSObject {
    void /* unknown type, empty encoding */ _featureStatus;
    void /* unknown type, empty encoding */ _promotionVisibility;
    void /* unknown type, empty encoding */ promoteIfOnboarded;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)pairedDevicesDidUpdate;

@end
