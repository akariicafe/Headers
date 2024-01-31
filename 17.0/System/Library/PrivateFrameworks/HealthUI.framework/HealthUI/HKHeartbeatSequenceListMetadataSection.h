@class NSArray, HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController;
@protocol HKHeartbeatSequenceListMetadataSectionDelegate;

@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (weak, nonatomic) id<HKHeartbeatSequenceListMetadataSectionDelegate> delegate;
@property (retain, nonatomic) NSArray *sequencesSamples;

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (void)_startAssociatedSequenceQueryForEvent:(id)a0;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)initWithEvent:(id)a0 healthStore:(id)a1 displayTypeController:(id)a2 unitController:(id)a3 delegate:(id)a4;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
