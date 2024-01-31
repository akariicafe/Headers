@class HKHealthStore, HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject

@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) HDProfile *profile;

- (id)initWithHealthStore:(id)a0 creatorDevice:(unsigned char)a1;
- (BOOL)markTemplateAvailable:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0 creatorDevice:(unsigned char)a1;
- (void).cxx_destruct;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)a0;

@end
