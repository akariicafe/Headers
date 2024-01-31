@class NSError;

@interface COMTErrorResult : COMTResult

@property (readonly, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithError:(id)a0 actionIdentifier:(id)a1;

@end
