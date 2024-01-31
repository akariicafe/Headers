@class NSURL, PRSDataStoreArchiveConfiguration;

@interface PBFDataStoreArchiver : NSObject

@property (readonly, copy, nonatomic) NSURL *dataStoreURL;
@property (copy, nonatomic) PRSDataStoreArchiveConfiguration *options;

+ (id)fileManager;
+ (BOOL)archiveDataStoreAtURL:(id)a0 toURL:(id)a1 options:(id)a2 error:(out id *)a3;

- (void).cxx_destruct;
- (BOOL)archiveToFileAtURL:(id)a0 error:(out id *)a1;
- (id)initWithDataStoreAtURL:(id)a0;

@end
