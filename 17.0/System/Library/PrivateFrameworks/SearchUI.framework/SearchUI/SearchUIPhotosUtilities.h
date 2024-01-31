@interface SearchUIPhotosUtilities : NSObject

+ (id)sharedPhotoLibraryIsSyndicated:(BOOL)a0;
+ (id)fetchOptionsForLibrary:(id)a0;
+ (id)fetchResultForPersonIdentifiers:(id)a0 isSyndicated:(BOOL)a1;
+ (id)fetchResultForPhotoIdentifiers:(id)a0 isSyndicated:(BOOL)a1;

@end
