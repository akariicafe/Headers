@class NSURL;

@interface FBKSqliteReader : NSObject

@property (retain, nonatomic) NSURL *dbFile;

- (id)initWithFile:(id)a0;
- (void).cxx_destruct;
- (id)tableNames;
- (id)allRowsForTable:(id)a0;
- (id)csvRepresentationForTable:(id)a0;
- (id)runQuery:(id)a0;

@end
