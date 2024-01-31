@class NSManagedObjectContext, NSArray, NSURL, NSDate, NSPersistentContainer;

@interface FlexLocalDBController : NSObject {
    NSURL *_destinationURL;
    NSPersistentContainer *_localSongDatabase;
    NSManagedObjectContext *_backgroundContext;
}

@property (readonly, nonatomic) NSArray *allSongEntries;
@property (retain, nonatomic) NSDate *lastCloudCheckDate;

- (void).cxx_destruct;
- (void)_insertFirstCloudCheckDate:(id)a0 andSave:(BOOL)a1;
- (BOOL)createSongEntryWithSongData:(id)a0 error:(id *)a1;
- (BOOL)deleteFieldsForSongUID:(id)a0 deletions:(id)a1 error:(id *)a2;
- (id)initWithDestinationURL:(id)a0;
- (BOOL)updateSongWithData:(id)a0 error:(id *)a1;

@end
