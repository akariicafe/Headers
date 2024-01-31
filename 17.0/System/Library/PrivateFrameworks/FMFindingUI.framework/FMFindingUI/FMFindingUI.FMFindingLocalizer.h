@class NSString;

@interface FMFindingUI.FMFindingLocalizer : NSObject {
    void /* unknown type, empty encoding */ findingTechnology;
    void /* unknown type, empty encoding */ localizer;
    void /* unknown type, empty encoding */ poseProvider;
    void /* unknown type, empty encoding */ proximityManager;
    void /* unknown type, empty encoding */ nearbyInteractionManager;
    void /* unknown type, empty encoding */ proximityManagerSubscription;
    void /* unknown type, empty encoding */ nearbyInteractionManagerSubscription;
    void /* unknown type, empty encoding */ preciseDistancesByUUID;
    void /* unknown type, empty encoding */ findableStatesByUUID;
    void /* unknown type, empty encoding */ productUUIDsByFindableUUID;
    void /* unknown type, empty encoding */ delegateTrampoline;
    void /* unknown type, empty encoding */ mockIndex;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
