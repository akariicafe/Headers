@class MKExploreGuidesView;

@interface MKExploreGuidesReusableView : UICollectionReusableView

@property (retain, nonatomic) MKExploreGuidesView *exploreGuidesView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureWithExploreGuides:(id)a0 tapHandler:(id /* block */)a1;

@end
