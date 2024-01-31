@class MSCMSSignerInfo;

@interface MSCMSCounterSignerInfo : MSCMSSignerInfo

@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo;

- (id)certificates;
- (void).cxx_destruct;
- (id)calculateSignerInfoDigest:(id *)a0;
- (BOOL)createRequiredAttributes:(id *)a0;
- (BOOL)verifyContentTypeAttribute:(id *)a0;

@end
