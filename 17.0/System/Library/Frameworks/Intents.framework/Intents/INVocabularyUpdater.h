@interface INVocabularyUpdater : _INVocabularyConnection

+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;
+ (void)clearAllCustomVocabularyOnBehalfOf:(id)a0;

- (void)setCustomPhotoAlbumNames:(id)a0;
- (void)setValidatedVocabulary:(id)a0 forIntentSlot:(id)a1 onBehalfOf:(id)a2 validationCompletion:(id /* block */)a3;
- (void)setValidatedVocabulary:(id)a0 forIntentSlot:(id)a1 validationCompletion:(id /* block */)a2;

@end
