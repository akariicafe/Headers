@class NSSet, PGTitle, NSString, PGTitleGenerationContext, PGTitleSpecCollection;
@protocol PGSpecBasedTitleGeneratorDelegate;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate> {
    PGTitleGenerationContext *_titleGenerationContext;
}

@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) NSSet *features;
@property (retain, nonatomic) PGTitleSpecCollection *specCollection;
@property (readonly, nonatomic) PGTitle *title;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (weak) id<PGSpecBasedTitleGeneratorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_title;
- (void).cxx_destruct;
- (id)_titleFromSpecs:(id)a0;
- (id)initWithMomentNodes:(id)a0 features:(id)a1 meaningLabel:(id)a2 isAggregation:(BOOL)a3 titleGenerationContext:(id)a4;
- (id)initWithMomentNodes:(id)a0 features:(id)a1 specCollection:(id)a2 titleGenerationContext:(id)a3;
- (id)initWithMomentNodes:(id)a0 meaningLabel:(id)a1 titleGenerationContext:(id)a2;
- (id)initWithMomentNodes:(id)a0 memoryCategory:(unsigned long long)a1 subcategory:(unsigned long long)a2 titleGenerationContext:(id)a3;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1 memoryCategory:(unsigned long long)a2 subcategory:(unsigned long long)a3 titleGenerationContext:(id)a4;
- (id)initWithMomentNodes:(id)a0 specCollection:(id)a1 titleGenerationContext:(id)a2;
- (id)titleSpec:(id)a0 inputForArgument:(id)a1;

@end
