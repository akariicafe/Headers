@class NSArray, UICollectionView, CKTranscriptCompositorSwift, UICollectionViewCompositionalLayout;
@protocol CKTranscriptCompositorDatasourceDelegate;

@interface CKTranscriptCompositor : NSObject

@property (retain, nonatomic) CKTranscriptCompositorSwift *representedObject;
@property (weak, nonatomic) id<CKTranscriptCompositorDatasourceDelegate> delegate;
@property (readonly, nonatomic) long long layoutContext;
@property (readonly, nonatomic) id datasource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (retain, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) long long contentsInsetReference;

- (void).cxx_destruct;
- (id)initWithLayoutContext:(long long)a0 datasource:(id)a1;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;

@end
