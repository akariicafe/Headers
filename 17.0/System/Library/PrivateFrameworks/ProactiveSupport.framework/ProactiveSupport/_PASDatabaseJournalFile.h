@class NSString;

@interface _PASDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    unsigned long long _readCursor;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

@property (readonly, nonatomic) BOOL isFullyRead;
@property (readonly, nonatomic) BOOL isAlive;
@property (readonly, nonatomic) unsigned long long length;

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
