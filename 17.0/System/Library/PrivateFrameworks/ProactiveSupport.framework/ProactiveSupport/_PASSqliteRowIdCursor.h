@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasRowId;

- (BOOL)currentIndexEof;
- (unsigned long long)outputRowId;
- (unsigned long long)currentIndexedRowId;

@end
