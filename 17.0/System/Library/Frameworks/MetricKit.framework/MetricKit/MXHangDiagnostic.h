@class NSString, MXCallStackTree, NSMeasurement;

@interface MXHangDiagnostic : MXDiagnostic

@property (readonly, nonatomic) long long hangType;
@property (readonly, nonatomic) NSString *hangTypeString;
@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *hangDuration;

+ (BOOL)supportsSecureCoding;
+ (long long)_hangTypeForHangTypeString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 callStack:(id)a4 hangDuration:(id)a5 hangType:(long long)a6;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 hangDuration:(id)a3;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 callStack:(id)a4 hangDuration:(id)a5;

@end
