@class NSString, NSDictionary, NSArray, NSMutableArray;

@interface BWFigCaptureDevice : NSObject <BWFigCaptureISPProcessingSessionDelegate> {
    struct OpaqueFigCaptureDevice { } *_device;
    NSDictionary *_streamsByPortType;
    NSMutableArray *_activeProcessingSessions;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) struct OpaqueFigCaptureDevice { } *figCaptureDevice;
@property (readonly) long long uniqueID;
@property (readonly) NSString *deviceID;
@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) NSArray *synchronizedStreamsGroups;
@property (readonly) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copyISPProcessingSessionWithType:(int)a0 error:(int *)a1;
- (void)dealloc;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;
- (int)requestControlOfStreams:(id)a0;
- (void)invalidate;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (void)processingSessionHasBeenInvalidated:(id)a0;
- (id)copyStreamsWithPortTypes:(id)a0 error:(int *)a1;
- (int)relinquishControlOfStreams:(id)a0;
- (void)resetSynchronizedStreamsGroups;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;
- (id)copySyncGroupForFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)a0 error:(int *)a1;
- (id)copySynchronizedStreamsGroupForStreams:(id)a0 error:(int *)a1;
- (int)enqueueReactionEffect:(id)a0;
- (id)copyStreamForFigCaptureStream:(struct OpaqueFigCaptureStream { } *)a0 error:(int *)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (id)copyStreamWithPortType:(struct __CFString { } *)a0 error:(int *)a1;
- (id)initWithFigCaptureDevice:(struct OpaqueFigCaptureDevice { } *)a0 deviceID:(id)a1;

@end
