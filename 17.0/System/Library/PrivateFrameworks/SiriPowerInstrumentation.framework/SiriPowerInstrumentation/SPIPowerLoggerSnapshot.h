@class SPIPowerLogger;

@interface SPIPowerLoggerSnapshot : NSObject

@property (readonly, nonatomic) SPIPowerLogger *powerLogger;
@property (readonly, nonatomic) struct SPIResourceUsage { unsigned long long cpuCycles; unsigned long long cpuInstructions; unsigned long long memPhysFootprint; } usage;
@property (readonly, nonatomic) unsigned long long captureTimestamp;

- (id)initWithPowerLogger:(id)a0 usage:(struct SPIResourceUsage { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 captureTimestamp:(unsigned long long)a2;
- (id)init;
- (void)logWithEventContext:(id)a0 turnIdentifier:(id)a1;
- (void)buildAndEmitWithMessageBuilder:(id)a0 eventContext:(id)a1;
- (void)logWithEventContext:(id)a0 ttsIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)logWithEventContext:(id)a0 requestIdentifier:(id)a1;
- (void)logWithEventContext:(id)a0 asrIdentifier:(id)a1;
- (void)logWithEventContext:(id)a0 componentName:(int)a1 identifier:(id)a2;
- (void)logWithEventContext:(id)a0;

@end
