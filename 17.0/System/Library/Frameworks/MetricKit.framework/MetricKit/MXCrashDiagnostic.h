@class NSString, MXCallStackTree, NSNumber, MXCrashDiagnosticObjectiveCExceptionReason;

@interface MXCrashDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSString *terminationReason;
@property (readonly) NSString *virtualMemoryRegionInfo;
@property (readonly) NSNumber *exceptionType;
@property (readonly) NSNumber *exceptionCode;
@property (readonly) NSNumber *signal;
@property (readonly) MXCrashDiagnosticObjectiveCExceptionReason *exceptionReason;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 terminationReason:(id)a4 applicationSpecificInfo:(id)a5 virtualMemoryRegionInfo:(id)a6 exceptionType:(id)a7 exceptionCode:(id)a8 exceptionReason:(id)a9 signal:(id)a10 stackTrace:(id)a11;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 terminationReason:(id)a4 applicationSpecificInfo:(id)a5 virtualMemoryRegionInfo:(id)a6 exceptionType:(id)a7 exceptionCode:(id)a8 signal:(id)a9 stackTrace:(id)a10;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 terminationReason:(id)a2 applicationSpecificInfo:(id)a3 virtualMemoryRegionInfo:(id)a4 exceptionType:(id)a5 exceptionCode:(id)a6 signal:(id)a7 stackTrace:(id)a8;

@end
