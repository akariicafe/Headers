@class MXCallStackTree, NSMeasurement;

@interface MXCPUExceptionDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *totalCPUTime;
@property (readonly) NSMeasurement *totalSampledTime;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 callStack:(id)a4 totalCpuTime:(id)a5 totalSampledTime:(id)a6;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 totalCpuTime:(id)a3 totalSampledTime:(id)a4;

@end
