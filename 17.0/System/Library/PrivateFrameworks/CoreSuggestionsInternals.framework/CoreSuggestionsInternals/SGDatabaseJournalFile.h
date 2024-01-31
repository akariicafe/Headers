@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void)write:(id)a0;
- (void)clear;
- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (void)destroy;
- (id)read;
- (id)description;
- (void).cxx_destruct;
- (void)destroyAndUnlinkIfEmpty;
- (void)unlink;

@end
