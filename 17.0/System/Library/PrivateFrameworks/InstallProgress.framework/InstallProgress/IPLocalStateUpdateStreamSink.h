@class NSString, NSMutableArray, IPLocalStateUpdateStream;

@interface IPLocalStateUpdateStreamSink : NSObject <IPStateUpdateStreamSink> {
    IPLocalStateUpdateStream *_weakStream;
    NSMutableArray *_queuedUpdateMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resumptionLock;
    BOOL _resumed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
