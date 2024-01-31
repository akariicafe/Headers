@class PLLibraryServicesManager, NSFileManager, PLPhotoLibraryPathManager;

@interface PLPhotoLibraryImportValidation : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSFileManager *_fm;
    PLPhotoLibraryPathManager *_pm;
}

- (id)initWithLibraryManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkLibraryCPLStatusWithError:(id *)a0;
- (BOOL)checkLegacyLibraryRequiresRepairWithError:(id *)a0;
- (BOOL)checkLegacyLibraryVersionStatusWithError:(id *)a0;
- (BOOL)checkLibraryVersionStatusWithError:(id *)a0;
- (BOOL)isLibraryValidForImportWithError:(id *)a0;

@end
