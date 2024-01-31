@class NSURL, NSArray, NSString;

@interface ICSystemPaperSyncArchive : NSObject {
    void /* unknown type, empty encoding */ databaseArchive;
    void /* unknown type, empty encoding */ assetArchives;
}

@property (nonatomic, readonly) NSURL *databaseArchive;
@property (nonatomic, readonly) NSArray *assetArchives;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseArchive:(id)a0 assetArchives:(id)a1;

@end
