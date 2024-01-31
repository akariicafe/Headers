@interface CKDMMCSPackageSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (void)dealloc;
- (void)updateWithData:(id)a0;
- (id)dataByFinishingSignature;
- (char *)_finishGenerator;

@end
