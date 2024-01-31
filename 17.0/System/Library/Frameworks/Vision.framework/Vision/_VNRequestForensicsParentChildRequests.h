@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject

@property (readonly, nonatomic) VNRequest *parentRequest;
@property (readonly, copy, nonatomic) NSArray *orderedChildRequests;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentRequest:(id)a0 orderedChildRequests:(id)a1;

@end
