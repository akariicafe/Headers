@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {
    TSPDatabase *_database;
    long long _identifier;
}

- (id)inputStream;
- (void).cxx_destruct;
- (long long)dataLength;
- (BOOL)hasSameLocationAs:(id)a0;
- (struct sqlite3_blob { } *)_openBlob;
- (struct ZeroCopyInputStream { void /* function */ **x0; } *)createProtobufInputStream;
- (id)initWithDatabase:(id)a0 identifier:(long long)a1;

@end
