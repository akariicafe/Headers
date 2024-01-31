@class NSString;

@interface FMFindingUI.FMR1ProximityManagerSubscription : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ subscriber;
    void /* unknown type, empty encoding */ findable;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ wantsRangingOnly;
    void /* unknown type, empty encoding */ wantsLocalizer;
    void /* unknown type, empty encoding */ poseProvider;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
