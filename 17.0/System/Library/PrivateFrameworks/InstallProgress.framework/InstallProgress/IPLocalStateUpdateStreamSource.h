@class NSString, IPLocalStateUpdateStream;
@protocol IPStateUpdateStreamSourceDelegate;

@interface IPLocalStateUpdateStreamSource : NSObject <IPStateUpdateStreamSource> {
    IPLocalStateUpdateStream *_weakStream;
    BOOL _resumed;
}

@property (weak) id<IPStateUpdateStreamSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
