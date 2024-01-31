@class NSString, FSWorkQueue, NSObject;
@protocol OS_dispatch_queue;

@interface FSBlockDeviceResource : FSResource {
    BOOL _terminated;
    BOOL _supportsBarrier;
    BOOL _supportsPriority;
    BOOL _supportsUnmap;
    unsigned long long _queueDepth;
    FSWorkQueue *_fsExecQueue;
}

@property (readonly) NSString *devicePath;
@property (readonly) int fileDescriptor;
@property (readonly) unsigned long long partitionBase;
@property unsigned int notification;
@property struct IONotificationPort { } *notifyPort;
@property (retain) NSObject<OS_dispatch_queue> *ioKitQueue;
@property (readonly) NSString *bsdName;
@property (readonly) BOOL writable;
@property (readonly) unsigned long long blockSize;
@property (readonly) unsigned long long blockCount;
@property (readonly) unsigned long long physicalBlockSize;
@property (nonatomic, setter=terminate:) BOOL terminated;

+ (BOOL)supportsSecureCoding;
+ (id)newProxyForBSDName:(id)a0;
+ (id)newProxyForBSDName:(id)a0 writable:(BOOL)a1;
+ (id)newWithBSDName:(id)a0 devicePath:(id)a1 fileDescriptor:(int)a2 writeable:(BOOL)a3;
+ (void)openWithBSDName:(id)a0 writeable:(BOOL)a1 auditToken:(id)a2 reply:(id /* block */)a3;

- (void)dealloc;
- (int)kind;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initCommon;
- (id)initWithCoder:(id)a0;
- (void)revoke:(BOOL)a0;
- (id)getResourceID;
- (id)initWithBSDName:(id)a0 devicePath:(id)a1 fileDescriptor:(int)a2 writeable:(BOOL)a3;
- (void)metaReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)metaWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)readFirstSectorAndLog;
- (void)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)releaseNotification;
- (void)synchronousMetaReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)synchronousMetaWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)synchronousReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)synchronousWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;

@end
