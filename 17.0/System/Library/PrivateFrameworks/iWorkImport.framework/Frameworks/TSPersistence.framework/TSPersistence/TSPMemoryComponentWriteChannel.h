@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_data> *_streamData;
    BOOL _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close;
- (void)close;
- (id)init;
- (id)serializedData;
- (void).cxx_destruct;
- (void)writeData:(id)a0;

@end
