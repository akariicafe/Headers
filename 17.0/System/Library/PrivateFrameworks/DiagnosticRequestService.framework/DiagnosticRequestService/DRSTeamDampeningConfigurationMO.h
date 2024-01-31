@class NSString, NSSet, DRSDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSTeamDampeningConfigurationMO : NSManagedObject

@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) NSSet *categoryConfigurations;
@property (retain, nonatomic) DRSDampeningConfigurationMO *defaultConfiguration;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManager;

+ (id)fetchRequest;

@end
