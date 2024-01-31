@interface _PASSqliteStatementCache : NSObject {
    struct _PASSqliteCacheScore { unsigned int crc32; unsigned char score; } _scores[32];
    struct sqlite3_stmt *_cached[8];
    void *_associatedObjects[8];
}

- (id)init;

@end
