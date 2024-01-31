@class NSString, PGGraphPetNodeCollection, PGGraphPersonNodeCollection;

@interface PGPetMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSString *seasonName;
@property (nonatomic) BOOL useAdventureTitle;
@property (nonatomic) BOOL usePetAndPersonTitle;
@property (retain, nonatomic) PGGraphPetNodeCollection *petNodes;
@property (retain, nonatomic) PGGraphPersonNodeCollection *personNodeAsCollection;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;

@end
