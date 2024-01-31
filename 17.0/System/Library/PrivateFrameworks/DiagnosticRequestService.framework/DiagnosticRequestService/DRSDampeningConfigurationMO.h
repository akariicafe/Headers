@class NSString, DRSTeamDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSDampeningConfigurationMO : NSManagedObject

@property (nonatomic) double acceptanceRate;
@property (nonatomic) long long countCap;
@property (nonatomic) double hysteresis;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) DRSTeamDampeningConfigurationMO *defaultTeamConfiguration;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManagerResource;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManagerSignature;
@property (retain, nonatomic) DRSTeamDampeningConfigurationMO *parentTeamConfiguration;

+ (id)fetchRequest;

@end
