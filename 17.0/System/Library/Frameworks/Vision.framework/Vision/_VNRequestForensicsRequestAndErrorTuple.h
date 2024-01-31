@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) NSError *error;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequest:(id)a0 error:(id)a1;

@end
