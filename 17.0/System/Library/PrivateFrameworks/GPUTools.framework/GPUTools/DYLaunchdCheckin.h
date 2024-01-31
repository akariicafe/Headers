@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DYLaunchdCheckin : NSObject {
    NSObject<OS_dispatch_source> *_connSource;
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_socketPath;
}

- (void).cxx_destruct;
- (id)_connectToSocketDescriptor:(int)a0;
- (int)_tcpListenSocketDescriptor;
- (int)_unixListenSocketDescriptor;
- (void)checkinWithBlock:(id /* block */)a0;
- (id)initWithSocketPath:(id)a0;

@end
