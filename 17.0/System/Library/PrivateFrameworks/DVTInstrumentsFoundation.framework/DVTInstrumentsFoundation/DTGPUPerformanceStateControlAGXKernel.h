@class NSString;

@interface DTGPUPerformanceStateControlAGXKernel : NSObject <DTGPUPerformanceStateControl> {
    unsigned int _connection;
    unsigned long long _acceleratorId;
    BOOL _holdingLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (id)disable;
- (BOOL)enable:(unsigned long long)a0;
- (id)currentState;
- (id)initWithDevice:(id)a0;
- (unsigned int)getIOAccelerator;

@end
