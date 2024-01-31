@class NSString;
@protocol SFDigestOperation;

@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction> {
    id _hmacPseudoRandomFunctionInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generateBytesWithLength:(long long)a0 key:(id)a1 error:(id)a2;
- (id)initWithDigestOperation:(id)a0;

@end
