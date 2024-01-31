@interface PXStoryDummyStyleProducer : NSObject <PXStoryStyleProducer>

@property (readonly, nonatomic) id /* block */ styleConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)styleWithCustomColorGradeKind:(long long)a0 originalColorGradeCategory:(id)a1 songResource:(id)a2 cueSource:(id)a3 autoEditDecisionList:(id)a4 styleOptions:(struct { unsigned long long x0; BOOL x1; })a5 isCustomized:(BOOL)a6;
- (id)initWithStyleConfiguration:(id /* block */)a0;

@end
