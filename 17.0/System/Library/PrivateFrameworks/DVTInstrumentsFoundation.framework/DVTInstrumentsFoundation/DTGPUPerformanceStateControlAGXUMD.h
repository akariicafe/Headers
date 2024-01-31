@class NSString;
@protocol AGXConsistentStateDevice;

@interface DTGPUPerformanceStateControlAGXUMD : NSObject <DTGPUPerformanceStateControl> {
    unsigned long long _acceleratorId;
    id<AGXConsistentStateDevice> _agxDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)disable;
- (BOOL)enable:(unsigned long long)a0;
- (id)currentState;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
