@class NSString, NSUserDefaults;

@interface FBKSSharedConstants : NSObject

@property (class, readonly, nonatomic) NSString *overrideGeoCountryCode;
@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;

+ (id)productVersion;
+ (long long)platform;
+ (void)initialize;
+ (short)environment;
+ (id)appleSeedURL;
+ (id)swVers;
+ (void)overrideEnvironment:(short)a0 host:(id)a1;
+ (id)swTrain;
+ (void)_deriveSystemVersion;
+ (id)appleSeedURLFromDefaults:(id)a0 withEnvironment:(short)a1;

@end
