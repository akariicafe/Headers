@interface SiriPlaybackControlSupport.HomeManager : NSObject <HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ homeManagerRefreshTimeout;
    void /* unknown type, empty encoding */ hmHomeManager;
    void /* unknown type, empty encoding */ hmHomeManagerOptions;
    void /* unknown type, empty encoding */ homeData;
    void /* unknown type, empty encoding */ readyGroup;
    void /* unknown type, empty encoding */ homekitInitSignpostID;
    void /* unknown type, empty encoding */ homekitRefreshSignpostID;
    void /* unknown type, empty encoding */ loadQueue;
    void /* unknown type, empty encoding */ homeKitTracker;
    void /* unknown type, empty encoding */ mediaGroupTracker;
}

- (id)init;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;

@end
