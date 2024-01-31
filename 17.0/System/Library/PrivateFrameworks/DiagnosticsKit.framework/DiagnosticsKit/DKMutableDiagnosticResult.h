@class NSArray, NSNumber, NSDictionary;

@interface DKMutableDiagnosticResult : DKDiagnosticResult

@property (retain, nonatomic) NSArray *fileSandboxTokens;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *files;
@property (retain, nonatomic) NSArray *uploadStatus;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
