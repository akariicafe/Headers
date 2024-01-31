@class OSLogDevice, _OSLogStreamFilter, NSMutableSet, NSCompoundPredicate;
@protocol OSDeviceDelegate, OSActivityStreamDelegate;

@interface OSActivityStream : NSObject {
    struct os_activity_stream_s { } *_stream;
    NSMutableSet *_pids;
    NSMutableSet *_uids;
    void *_deviceSearchSession;
    void *_deviceEventSession;
    BOOL _delegateStreamErrorLess;
    BOOL _delegateStreamWithError;
    BOOL _delegateHasDidFail;
    _OSLogStreamFilter *_streamFilter;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long eventFilter;
@property (nonatomic) unsigned long long events;
@property (weak, nonatomic) id<OSActivityStreamDelegate> delegate;
@property (copy, nonatomic) NSCompoundPredicate *predicate;
@property (weak, nonatomic) id<OSDeviceDelegate> deviceDelegate;
@property (retain, nonatomic) OSLogDevice *device;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithDevice:(void *)a0;
- (void).cxx_destruct;
- (void)addProcessID:(int)a0;
- (BOOL)establishTrust:(id)a0;
- (void)addUserID:(unsigned int)a0;
- (id)getInfoForDevice:(id)a0 andKey:(id)a1;
- (void)startLocal;
- (void)startRemote;
- (void)stopLocal;
- (void)stopRemote;
- (BOOL)streamEvent:(id)a0 error:(id)a1;

@end
