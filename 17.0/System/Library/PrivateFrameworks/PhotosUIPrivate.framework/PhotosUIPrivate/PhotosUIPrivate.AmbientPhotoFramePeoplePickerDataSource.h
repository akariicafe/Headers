@interface PhotosUIPrivate.AmbientPhotoFramePeoplePickerDataSource : PXPassiveContentPeoplePickerDataSourceBase

- (id)initWithPhotoLibrary:(id)a0;
- (void)computeAndCachePersonsWithPersonLocalIdentifierWithNegativeFeedback:(id)a0;
- (id)peopleSuggestionSubtypes;

@end
