@class NSOrderedCollectionDifference, NSDiffableDataSourceSectionSnapshot;

@interface NSDiffableDataSourceSectionTransaction : NSObject

@property (readonly, nonatomic) id sectionIdentifier;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;

- (id)description;
- (id)_spiCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSectionIdentifier:(id)a0 initialSnapshot:(id)a1 finalSnapshot:(id)a2 difference:(id)a3;

@end
