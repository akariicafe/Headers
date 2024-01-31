@class PGGraph;

@interface PGSearchMetadataComputer : NSObject

@property (readonly) PGGraph *graph;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (id)_suggestableLocalizedSceneNames;
- (id)_blockedMeaningsByMeaning;
- (id)_mePersonUUID;
- (id)searchMetadataWithOptions:(id)a0;

@end
