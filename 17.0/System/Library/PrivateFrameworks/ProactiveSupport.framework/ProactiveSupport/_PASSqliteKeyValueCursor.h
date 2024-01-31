@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (id)currentIndexedKey;
- (BOOL)currentIndexEof;
- (id)outputKey;

@end
