@class NSArray;

@interface PGPetWallpaperSuggestion : PGSingleAssetSuggestion {
    NSArray *_suggestedPersonLocalIdentifiers;
}

- (void).cxx_destruct;
- (id)suggestedPersonLocalIdentifiers;
- (id)initWithPetLocalIdentifier:(id)a0 type:(unsigned short)a1 subtype:(unsigned short)a2 asset:(id)a3;

@end
