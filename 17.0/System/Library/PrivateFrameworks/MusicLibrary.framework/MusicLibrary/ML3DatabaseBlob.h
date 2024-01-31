@interface ML3DatabaseBlob : NSObject {
    struct sqlite3_blob { } *_sqliteHandle;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (id)data;
- (int)writeData:(id)a0 numberOfBytes:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)initWithSQLiteHandle:(struct sqlite3_blob { } *)a0;
- (int)readData:(id)a0 numberOfBytes:(unsigned long long)a1 offset:(unsigned long long)a2;

@end
