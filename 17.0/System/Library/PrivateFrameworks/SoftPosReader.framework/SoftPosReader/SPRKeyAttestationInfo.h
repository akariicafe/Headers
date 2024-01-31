@class SPRKeyAttestationRequest, NSData;

@interface SPRKeyAttestationInfo : NSObject <SPRDERRepresentable>

@property (readonly, nonatomic) SPRKeyAttestationRequest *request;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy) NSData *derRepresentation;

- (void).cxx_destruct;
- (id)initWithDERRepresentation:(id)a0 error:(id *)a1;
- (id)initWithRequest:(id)a0 signature:(id)a1;

@end
