@class NSArray;

@interface PXSharedLibraryIncludedPeopleDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSArray *allPersonUUIDs;
@property (readonly, nonatomic) NSArray *allInfos;
@property (readonly, nonatomic) NSArray *infosWithBothPeopleAndParticipants;
@property (readonly, nonatomic) NSArray *infosWithoutPeople;

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)infoAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)infoForParticipant:(id)a0;
- (id)infoForPersonUUID:(id)a0;
- (id)initWithInfos:(id)a0 infosWithBothPeopleAndParticipants:(id)a1 infosWithoutPeople:(id)a2;

@end
