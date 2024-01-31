@class NSString;

@interface PLBatteryBreakdownNotificationInfo : NSObject

@property (retain) NSString *bundleID;
@property BOOL isFirstParty;
@property int notificationType;
@property unsigned long long bgWakingCount;
@property double bgWakingNSEDuration;
@property unsigned long long fgWakingCount;
@property double fgWakingNSEDuration;
@property unsigned long long nonWakingCount;
@property double nonWakingNSEDuration;
@property unsigned long long localCount;

+ (double)representativeDisplayPower;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;
- (double)activeEnergy;
- (double)calculateActiveEnergyForNSEDuration:(double)a0 andCount:(unsigned long long)a1 withNominalEnergy:(double)a2;
- (double)baseEnergy;
- (void)combineWith:(id)a0;
- (double)displayEnergy;
- (double)notificationEnergy;

@end
