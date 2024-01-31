@interface DIVerifyParams : DIBaseParams

@property (nonatomic) BOOL shouldValidateShadows;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)verifyWithError:(id *)a0;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;

@end
