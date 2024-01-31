@class NSDictionary, NSString, NSNumber;

@interface APECSettingsConfig : APConfiguration

@property (retain, nonatomic) NSDictionary *serverSettings;
@property (retain, nonatomic) NSString *serverEnvironment;
@property (retain, nonatomic) NSNumber *periodicDelay;
@property (retain, nonatomic) NSNumber *batchSize;

+ (id)path;

@end
