@interface PNPersonPromoterEvaluation : NSObject

+ (id)_peopleClustersDictionaryForPeople:(id)a0 withPhotoLibrary:(id)a1;
+ (BOOL)createDirectoryIfNotExitAtURL:(id)a0;
+ (BOOL)exportPhotoLibrary:(id)a0 toURL:(id)a1 forPeople:(id)a2 error:(id *)a3;
+ (BOOL)exportPhotoLibrary:(id)a0 toURL:(id)a1 forPeopleType:(unsigned long long)a2 error:(id *)a3;
+ (id)openPhotoLibraryAtURL:(id)a0;
+ (void)peopleClusteringWithParameter:(id)a0 photoLibrary:(id)a1 directoryURL:(id)a2 delegate:(id)a3;

@end
