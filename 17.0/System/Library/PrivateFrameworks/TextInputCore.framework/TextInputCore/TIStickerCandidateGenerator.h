@class CAContext, TISceneTaxonomyGenerator;

@interface TIStickerCandidateGenerator : NSObject {
    TISceneTaxonomyGenerator *_sceneTaxonomyGenerator;
}

@property (readonly, nonatomic) CAContext *context;

- (id)init;
- (void)createContext;
- (void).cxx_destruct;
- (BOOL)_facadeSupportsStickersWithIdentifiers;
- (struct CGImage { } *)_scaledImageForStickerImage:(struct CGImage { } *)a0 height:(double)a1;
- (id)ckAttributionInfoFromSticker:(id)a0;
- (void)createSceneTaxonomyGenerator;
- (id)generateKeyboardCandidatesForStickerRepresentations:(id)a0;
- (id)generateKeyboardCandidatesForStickers:(id)a0 withRenderTraits:(id)a1;
- (void)generateStickerCandidatesForSearchableQueries:(id)a0 withRenderTraits:(id)a1 completionHandler:(id /* block */)a2;
- (id)generateStickerQueriesForText:(id)a0;
- (id)keyboardStickerRepresentationsForStickerIdentifier:(id)a0 roles:(id)a1;
- (id)keyboardStickerWithIdentifier:(id)a0 roles:(id)a1;
- (id)stickerRepresentationsForStickerIdentifiers:(id)a0 roles:(id)a1;
- (id)stickersForStickerIdentifiers:(id)a0 roles:(id)a1;

@end
