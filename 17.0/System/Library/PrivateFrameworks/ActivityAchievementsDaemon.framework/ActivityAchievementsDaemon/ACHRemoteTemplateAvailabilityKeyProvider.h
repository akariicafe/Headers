@class HKHealthStore, HDProfile;

@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject

@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) HDProfile *profile;

- (id)initWithHealthStore:(id)a0 creatorDevice:(unsigned char)a1;
- (BOOL)markTemplateAvailable:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0 creatorDevice:(unsigned char)a1;
- (BOOL)templateAvailableOnPairedDevice:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)availabilityStateKeyFromUniqueName:(id)a0 creatorDevice:(unsigned char)a1;

@end
