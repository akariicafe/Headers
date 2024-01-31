@class NSString, NSDictionary;

@interface KTSelfValidationDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *rawAccountKey;
@property (retain) NSString *accountKey;
@property (retain) NSDictionary *uriToDiagnostics;
@property (retain) NSDictionary *ktSelfVerificationInfoDiagnosticsJson;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

+ (id)jsonClasses;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
