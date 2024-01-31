@class NSArray;

@interface CKTranscriptCompositorSwift : NSObject {
    void /* unknown type, empty encoding */ boundarySupplementaryItems;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ collectionView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ layoutContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ datasource;
@property (nonatomic, retain) void /* unknown type, empty encoding */ collectionViewLayout;
@property (nonatomic) void /* unknown type, empty encoding */ scrollDirection;
@property (nonatomic) void /* unknown type, empty encoding */ interSectionSpacing;
@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (nonatomic) void /* unknown type, empty encoding */ contentsInsetReference;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLayoutContext:(long long)a0 datasource:(id)a1;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;

@end
