@class NSError, NSString, DYTransport, NSURL, NSPredicate, NSMutableDictionary, DYTransportMessage, NSDictionary, NSMutableArray, NSObject, NSFileManager;
@protocol OS_dispatch_queue;

@interface DYFSStreamer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSFileManager *_fileManager;
    DYTransport *_transport;
    DYTransportMessage *_initTransferAckMessage;
    NSMutableDictionary *_fileHandles;
    NSError *_deferredReceiveError;
    unsigned int _ownerUID;
    NSDictionary *_directoryAttributes;
    BOOL _isSender;
    BOOL _itemIsDirectory;
    BOOL _didInitiate;
    BOOL _invalid;
}

@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *destinationName;
@property (nonatomic) BOOL streamLocally;
@property (retain, nonatomic) NSPredicate *filenameFilter;
@property (copy, nonatomic) NSString *owner;
@property (readonly, nonatomic) unsigned long long files;
@property (readonly, nonatomic) unsigned long long bytes;
@property (readonly, nonatomic) unsigned long long messages;
@property (readonly, nonatomic) NSMutableArray *urls;

+ (void)denyTransfer:(id)a0 transport:(id)a1;
+ (id)streamItem:(id)a0 withTransport:(id)a1;
+ (id)streamItem:(id)a0 withTransport:(id)a1 destinationName:(id)a2;

- (void)dealloc;
- (void)_invalidate;
- (id)description;
- (id)initWithURL:(id)a0 transport:(id)a1 asSender:(BOOL)a2;
- (BOOL)_createDirectoryWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)_createOrUpdateFileWithData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (BOOL)_createSymlinkWithAttributes:(id)a0 error:(id *)a1;
- (id)_resolveRelativePath:(id)a0 error:(id *)a1;
- (void)_sendAbortMessageInReplyTo:(id)a0 becauseOfError:(id)a1;
- (BOOL)_sendCreateDirectoryMessage:(id)a0 error:(id *)a1;
- (BOOL)_sendCreateSymlinkMessage:(id)a0 destination:(id)a1 error:(id *)a2;
- (BOOL)_sendFileAtURL:(id)a0 relativePath:(id)a1 error:(id *)a2;
- (void)denyTransfer:(id)a0;
- (id)initiateTransfer;
- (id)receiveTransfer:(id)a0;

@end
