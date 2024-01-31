@class NSError;

@interface HFHomeEnergyManager : NSObject {
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ isHomeEnergyAvailable;
    void /* unknown type, empty encoding */ cachedHomeEnergyAvailable;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ temporaryLocation;
@property (nonatomic, readonly) BOOL isHomeEnergyEnabled;
@property (nonatomic, readonly) BOOL isHomeEnergyAvailableInCurrentLocale;
@property (nonatomic) BOOL isHomeEnergyVisible;
@property (nonatomic, readonly) BOOL hasLoadedHomeEnergyAvailable;
@property (nonatomic, readonly) BOOL effectiveHomeEnergyAvailable;

+ (BOOL)isSupportedInRegion:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)updateIsHomeEnergyEnabledWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)isHomeEnergyAvailableInRegionWithCompletionHandler:(void (^)(BOOL))a0;
- (BOOL)isLocaleSupportingHomeEnergy;

@end
