@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate>

@property (readonly, nonatomic) MKPlaceSectionView *sectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)sectionView:(id)a0 didDeselectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)sectionView:(id)a0 didSelectFooter:(id)a1;
- (void)sectionView:(id)a0 didSelectHeader:(id)a1;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)stackViewNeedsLayout:(id)a0;

@end
