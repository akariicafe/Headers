@class NSSet;

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) unsigned long long meaning;
@property (readonly, nonatomic) NSSet *features;
@property (readonly, nonatomic) NSSet *meaningfulEvents;
@property (nonatomic) double unreliableMeaningRatioThresholdForSpecificTitle;

+ (id)_momentNodesFromMeaningfulEvents:(id)a0;

- (id)_subtitle;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_meaningLabelForTitle;
- (id)initWithMeaning:(unsigned long long)a0 features:(id)a1 meaningfulEvents:(id)a2 titleGenerationContext:(id)a3;

@end
