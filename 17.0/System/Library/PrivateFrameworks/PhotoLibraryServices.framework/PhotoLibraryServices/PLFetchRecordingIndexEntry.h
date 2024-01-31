@interface PLFetchRecordingIndexEntry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _entryLock;
}

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) BOOL unavailable;

- (void)lock;
- (id)initWithOffset:(long long)a0;
- (void)unlock;
- (void)entryLocked_markUnavailable;
- (struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; } *)entryLocked_statementEntryFomBuffer:(void *)a0;

@end
