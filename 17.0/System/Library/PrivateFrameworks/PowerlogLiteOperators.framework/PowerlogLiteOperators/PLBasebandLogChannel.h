@protocol PLBasebandLogChannelDelegate;

@interface PLBasebandLogChannel : NSObject {
    struct __CFMessagePort { } *remotePort;
    struct __CFMessagePort { } *localPort;
}

@property (nonatomic) id<PLBasebandLogChannelDelegate> delegate;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL cachingEnabled;

- (void)close;
- (BOOL)openWithConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)flush;
- (void)commitHardwareLogs;
- (void)invalidate;
- (void)setChannelTimeout:(double)a0;
- (void)setHardwareLoggingLevel:(unsigned long long)a0 withWindowSize:(unsigned long long)a1;
- (void)sendObjectOverRemotePort:(id)a0;
- (void)connectionInvalidated:(id)a0;
- (void)enableLogCodes:(id)a0 andEvents:(id)a1 andExtraCode:(id)a2;

@end
