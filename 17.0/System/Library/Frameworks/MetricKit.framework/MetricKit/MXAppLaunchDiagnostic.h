@class MXCallStackTree, NSMeasurement;

@interface MXAppLaunchDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *launchDuration;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 callStack:(id)a4 launchDuration:(id)a5;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 launchDuration:(id)a3;

@end
