@class NSObject;
@protocol OS_dispatch_queue;

@interface FSVolume : NSObject {
    NSObject<OS_dispatch_queue> *_renameWorkQueue;
}

@property (class, readonly) int pathConfUnlimited;

@property (nonatomic) int volumeState;
@property (nonatomic) BOOL wasTerminated;
@property (retain) NSObject<OS_dispatch_queue> *globalWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renameWorkQueue;

+ (id /* block */)newLIDirEntryPacker:(void *)a0 bufLen:(unsigned long long)a1 bytesPacked:(unsigned long long *)a2 withAttr:(BOOL)a3;
+ (id)volumeIdentifierDescription:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;

@end
