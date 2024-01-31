@protocol SFDigestOperation;

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {
    id _hmacOperationInternal;
}

@property (copy, nonatomic) id<SFDigestOperation> digestOperation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDigestOperation:(id)a0;

@end
