@class NSString, NSError;

@interface HUHomeEnergyManagerHelper : NSObject {
    void /* unknown type, empty encoding */ home;
}

@property (nonatomic, readonly) BOOL isHomeEnergyVisible;
@property (nonatomic, readonly) BOOL isHomeEnergyEnabled;
@property (nonatomic, readonly) BOOL hasLoadedHomeEnergyAvailable;
@property (nonatomic, readonly) BOOL effectiveHomeEnergyAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)fetchEnergyAdviceWithCompletionHandler:(void (^)(NSString *))a0;
- (void)updateContextWithCompletionHandler:(void (^)(void))a0;
- (void)updateIsHomeEnergyEnabledWithCompletionHandler:(void (^)(BOOL, NSError *))a0;

@end
