@class NSString;

@interface FMFindingUI.FMNearbyInteractionManager : NSObject {
    void /* unknown type, empty encoding */ contexts;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ applicationIsInBackground;
    void /* unknown type, empty encoding */ itemLocalizersCount;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ arSession;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)applicationWillEnterForeground;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;

@end
