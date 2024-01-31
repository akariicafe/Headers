@class NSArray, NSURL;

@interface PBFDataStoreArchiveAdjudicator : NSObject

@property (readonly, nonatomic) NSArray *archives;
@property (readonly, nonatomic) NSArray *archiveNames;
@property (readonly, copy, nonatomic) NSURL *dataStoreBaseURL;
@property (readonly, copy, nonatomic) NSURL *archiveBaseURL;

- (void).cxx_destruct;
- (id)archiveDataStoreVersion:(unsigned long long)a0 toURL:(id)a1 options:(id)a2 removeAfterSuccess:(BOOL)a3 error:(out id *)a4;
- (id)archiveForName:(id)a0;
- (id)archiveDataStoreVersion:(unsigned long long)a0 name:(id)a1 options:(id)a2 removeAfterSuccess:(BOOL)a3 error:(out id *)a4;
- (BOOL)deleteArchive:(id)a0 error:(out id *)a1;
- (id)initWithDataStoreBaseURL:(id)a0 archiveBaseURL:(id)a1;
- (BOOL)markArchivesAsPurgable:(out id *)a0;
- (BOOL)restoreArchive:(id)a0 backupExistingDataStoreIfPossible:(BOOL)a1 error:(out id *)a2;

@end
