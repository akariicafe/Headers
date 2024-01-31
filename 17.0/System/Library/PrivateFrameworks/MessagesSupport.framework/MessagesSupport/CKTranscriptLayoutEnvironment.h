@class CKTranscriptLayoutMessageEditingContext, UICollectionView;
@protocol NSCollectionLayoutEnvironment;

@interface CKTranscriptLayoutEnvironment : NSObject

@property (retain, nonatomic) id datasource;
@property (retain, nonatomic) id<NSCollectionLayoutEnvironment> collectionLayoutEnvironment;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic) long long layoutContext;
@property (retain, nonatomic) CKTranscriptLayoutMessageEditingContext *messageEditingContext;

- (void).cxx_destruct;
- (id)initWithDatasource:(id)a0 collectionLayoutEnvironment:(id)a1 collectionView:(id)a2 marginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 layoutContext:(long long)a4 messageEditingContext:(id)a5;

@end
