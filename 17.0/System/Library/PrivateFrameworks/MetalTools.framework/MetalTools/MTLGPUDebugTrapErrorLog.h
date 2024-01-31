@class NSString;

@interface MTLGPUDebugTrapErrorLog : MTLGPUDebugGPULog

@property (retain, nonatomic) NSString *functionName;

- (void)dealloc;
- (id)description;

@end
