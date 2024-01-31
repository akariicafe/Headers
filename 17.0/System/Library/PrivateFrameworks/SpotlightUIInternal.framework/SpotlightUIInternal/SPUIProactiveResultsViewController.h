@class NSTimer, SPUISearchModelZKW;

@interface SPUIProactiveResultsViewController : SPUIResultsViewController

@property (retain) NSTimer *footerTransitionTimer;
@property (readonly) SPUISearchModelZKW *model;

- (void)setFooterView:(id)a0;
- (void)searchAgentUpdatedResults:(id)a0;
- (BOOL)searchAgentHasWindow:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchModel:(id)a0 searchEntity:(id)a1;
- (void)updateWithResultSections:(id)a0 resetScrollPoint:(BOOL)a1 animated:(BOOL)a2;
- (void)fadeInFooterView;
- (unsigned long long)refreshResultsWithContext:(id)a0 allowPartialUpdates:(BOOL)a1;

@end
