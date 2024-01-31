@class NSString, NSDictionary, NSMutableDictionary;
@protocol BWFigCaptureStreamStartStopDelegate;

@interface BWFigCaptureStream : NSObject {
    struct OpaqueFigCaptureStream { } *_stream;
    NSString *_portTypeShortString;
    NSMutableDictionary *_cachedProperties;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) struct OpaqueFigCaptureStream { } *figCaptureStream;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDictionary *supportedProperties;
@property (nonatomic) id<BWFigCaptureStreamStartStopDelegate> startStopDelegate;
@property (nonatomic) BOOL calibrationDataSent;
@property (copy, nonatomic) id /* block */ reactionsInProgressChangedHandler;
@property (readonly, nonatomic) BOOL streaming;

+ (void)initialize;

- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (void)flushPropertyCache;
- (void)dealloc;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;
- (int)start;
- (void)synchronizedStreamsGroupDidStop;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { } *)a0;
- (void)invalidate;
- (void)synchronizedStreamsGroupWillStop;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (int)waitForNotificationBarrier;
- (int)stop;
- (id)description;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;
- (int)addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (int)enqueueReactionEffect:(id)a0;
- (id)debugDescription;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (int)sendCommandProperty:(struct __CFString { } *)a0;

@end
