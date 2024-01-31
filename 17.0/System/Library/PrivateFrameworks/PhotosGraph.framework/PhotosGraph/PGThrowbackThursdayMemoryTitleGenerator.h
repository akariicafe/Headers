@class NSString;

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate> {
    long long _numberOfYearsAgo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNode:(id)a0 numberOfYearsAgo:(long long)a1 titleGenerationContext:(id)a2;
- (id)titleGenerator:(id)a0 inputForArgument:(id)a1;

@end
