@interface SPRProvider : SPRObject

@property (class, readonly, nonatomic) SPRProvider *shared;

@property (readonly, nonatomic) long long maxConfiguratorInstance;
@property (readonly, nonatomic) long long maxMonitorInstance;
@property (readonly, nonatomic) long long maxReaderInstance;

- (id)makeConfiguratorAndReturnError:(id *)a0;
- (id)makeMonitorAndReturnError:(id *)a0;
- (id)makePINControllerAndReturnError:(id *)a0;
- (id)makeReaderAndReturnError:(id *)a0;

@end
