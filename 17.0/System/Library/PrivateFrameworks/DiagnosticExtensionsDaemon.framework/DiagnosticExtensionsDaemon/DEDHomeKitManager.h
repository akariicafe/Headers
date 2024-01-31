@class NSString, HMHomeManager;

@interface DEDHomeKitManager : NSObject

@property (retain) HMHomeManager *homeKitManager;
@property (readonly) NSString *homeKitIdentifier;
@property (readonly) NSString *homeTheaterSystemName;
@property (readonly) NSString *homeTheaterSystemIdentifier;

+ (id)sharedInstance;

- (void)start;
- (BOOL)isHomeKitResident;
- (id)stringForAirPlayPreference:(id)a0;
- (void).cxx_destruct;

@end
