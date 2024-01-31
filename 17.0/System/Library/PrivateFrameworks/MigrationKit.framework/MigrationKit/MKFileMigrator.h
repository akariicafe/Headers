@class NSString;

@interface MKFileMigrator : MKMigrator {
    NSString *_root;
}

- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0 filename:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4;
- (void)importChunk:(id)a0 filename:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4;

@end
