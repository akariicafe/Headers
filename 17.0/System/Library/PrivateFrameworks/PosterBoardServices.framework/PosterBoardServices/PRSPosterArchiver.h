@class BSProcessHandle, NSFileManager;

@interface PRSPosterArchiver : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) BSProcessHandle *processHandle;

+ (id)archiveConfiguration:(id)a0 format:(long long)a1 error:(out id *)a2;
+ (id)unarchiveConfigurationAtURL:(id)a0 format:(long long)a1 error:(out id *)a2;
+ (id)unarchiveConfigurationFromData:(id)a0 format:(long long)a1 error:(out id *)a2;
+ (id)archiveConfiguration:(id)a0 error:(out id *)a1;
+ (id)archiveExtensionForFormat:(long long)a0;
+ (long long)formatForData:(id)a0;
+ (long long)formatForDataAtURL:(id)a0;
+ (long long)minSupportedArchiveVersion;
+ (id)unarchiveConfigurationAtURL:(id)a0 error:(out id *)a1;
+ (id)unarchiveConfigurationFromData:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0;
- (id)archiveConfiguration:(id)a0 format:(long long)a1 error:(out id *)a2;
- (id)unarchiveConfigurationAtURL:(id)a0 format:(long long)a1 error:(out id *)a2;
- (id)unarchiveConfigurationFromData:(id)a0 format:(long long)a1 error:(out id *)a2;
- (id)_unarchiveWithHandler:(id /* block */)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)archiveConfiguration:(id)a0 error:(out id *)a1;
- (id)initWithFileManager:(id)a0 processHandle:(id)a1;
- (id)unarchiveConfigurationAppleArchiveAtURL:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)unarchiveConfigurationAppleArchiveData:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)unarchiveConfigurationAtURL:(id)a0 error:(out id *)a1;
- (id)unarchiveConfigurationFromData:(id)a0 error:(out id *)a1;
- (id)unarchiveConfigurationZipArchiveAtURL:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)unarchiveConfigurationZipArchiveData:(id)a0 manifest:(out id *)a1 error:(out id *)a2;

@end
