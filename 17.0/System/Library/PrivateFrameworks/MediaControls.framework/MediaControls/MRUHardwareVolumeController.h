@class NSHashTable, NSArray;

@interface MRUHardwareVolumeController : NSObject

@property (class, readonly, nonatomic) MRUHardwareVolumeController *sharedInstance;

@property (retain, nonatomic) NSHashTable *assertions;
@property (retain, nonatomic) NSArray *invalidators;

- (id)init;
- (void).cxx_destruct;
- (void)relinquishHardwareVolumeButtons;
- (id)requestControlsForVolumeDataSource:(id)a0 reason:(id)a1;
- (void)unregisterAssertion:(id)a0;
- (void)updateControlsForAssertion:(id)a0;

@end
