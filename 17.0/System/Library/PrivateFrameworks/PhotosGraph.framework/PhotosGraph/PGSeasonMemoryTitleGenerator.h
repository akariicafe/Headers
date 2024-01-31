@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSString *season;

+ (id)seasonSubtitleWithMomentNodes:(id)a0 seasonName:(id)a1;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 seasonName:(id)a1 titleGenerationContext:(id)a2;

@end
