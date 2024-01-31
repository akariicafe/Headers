@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioCaptionsBufferInfoCollection : NSObject {
    NSMutableArray *_bufferInfos;
    double _bufferLength;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (readonly, nonatomic) NSArray *streamTokens;

- (void)dealloc;
- (id)description;
- (id)initWithBufferLength:(double)a0;

@end
