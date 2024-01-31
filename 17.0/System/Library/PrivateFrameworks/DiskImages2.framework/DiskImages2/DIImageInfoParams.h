@class NSDictionary;

@interface DIImageInfoParams : DIBaseParams

@property (copy, nonatomic) NSDictionary *imageInfo;
@property BOOL extraInfo;
@property BOOL openEncryption;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)retrieveWithError:(id *)a0;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;

@end
