@class NSString, NSNumber, MXMInstrument;

@interface MXMCPUMetric : MXMMetric

@property (class, readonly, copy, nonatomic) MXMCPUMetric *instrumentThread;
@property (class, readonly, copy, nonatomic) MXMCPUMetric *currentProcess;

@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSNumber *processIdentifier;
@property (readonly, copy, nonatomic) MXMInstrument *instrument;

- (id)initWithProcessIdentifier:(int)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithProcessName:(id)a0;
- (id)_constructProbe;
- (BOOL)_shouldConstructProbe;
- (BOOL)harvestData:(id *)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 filter:(id)a1;

@end
