@class NSURL, PRSDataStoreArchiveConfiguration;

@interface PBFDataStoreUnarchiver : NSObject

@property (readonly, copy, nonatomic) NSURL *archivedDataStoreURL;
@property (nonatomic) PRSDataStoreArchiveConfiguration *options;
@property (nonatomic) BOOL remapFocusConfigurations;

+ (id)fileManager;
+ (BOOL)unarchiveDataStoreAtURL:(id)a0 toURL:(id)a1 options:(id)a2 error:(out id *)a3;

- (id)_availableActivities;
- (void).cxx_destruct;
- (id)_activityForIdentifier:(id)a0;
- (BOOL)_focusActivityExistsForUUID:(id)a0;
- (id)initWithArchivedDataStoreURL:(id)a0;
- (BOOL)unarchiveToDirectoryAtURL:(id)a0 error:(out id *)a1;

@end
