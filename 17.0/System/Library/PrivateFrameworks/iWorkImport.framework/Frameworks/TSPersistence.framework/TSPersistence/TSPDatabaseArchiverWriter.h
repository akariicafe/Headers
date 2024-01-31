@class NSString, TSPDatabase, TSPDistributableFileManager;

@interface TSPDatabaseArchiverWriter : NSObject {
    long long _dataStateIdentifier;
    NSString *_fileStateIdentifier;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
}

@property (readonly, nonatomic) BOOL hasDataState;
@property (nonatomic) long long dataStateIdentifier;
@property (readonly, nonatomic) BOOL hasFileState;
@property (retain, nonatomic) NSString *fileStateIdentifier;
@property (retain, nonatomic) NSString *filenameHint;
@property (nonatomic) BOOL forceFileStorage;

- (void).cxx_destruct;
- (void)serializeDataFromStream:(id)a0 length:(long long)a1;
- (struct sqlite3_blob { } *)_openDatabaseBlobWithSize:(int)a0;
- (void)_writeDataFromInputStreamToDatabase:(id)a0 length:(int)a1;
- (void)_writeDataFromInputStreamToFile:(id)a0 length:(long long)a1;
- (id)initWithDatabase:(id)a0 fileManager:(id)a1;
- (BOOL)serializeArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0;

@end
