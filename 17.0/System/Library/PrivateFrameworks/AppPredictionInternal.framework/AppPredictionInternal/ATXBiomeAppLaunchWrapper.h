@class BMAppInFocus, NSDate;

@interface ATXBiomeAppLaunchWrapper : NSObject

@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isMacPortable;
@property (readonly, nonatomic) BOOL isMacDesktop;
@property (readonly, nonatomic) BMAppInFocus *appLaunchEvent;
@property (readonly, nonatomic) NSDate *launchTimestamp;

- (void).cxx_destruct;
- (id)initWithAppLaunch:(id)a0 isLocal:(BOOL)a1 isMacPortable:(BOOL)a2 isMacDesktop:(BOOL)a3;

@end
