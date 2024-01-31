@class NSString, NSNumber;

@interface SGSignatureDissector : SGPipelineDissector <SGMailMessageProcessing> {
    NSNumber *_ignoreDataDetectorsForTesting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleLineSignatureLeadingCharacterSet;

- (id)findSignaturePrefixesInMessage:(id)a0 withSignaturePrefixes:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSenderName:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 restrictLength:(BOOL)a2 forMessage:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findSignaturePrefix:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hmmSignatureRangeWithContent:(id)a0 detectedData:(id)a1 quotedRegions:(id)a2 authorName:(id)a3;
- (id)findRejectSig:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })trailingSenderNameLineRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hmmPlausibleSignatureRange:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreSignature:(id)a0 signatureRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 isInhuman:(BOOL *)a2;
- (id)findValedictionCommencedSignatureRanges:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })miniSignatureRange:(id)a0;
- (id)initIgnoringDataDetectors;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSenderNameComponents:(id)a0 withFullname:(id)a1 inSubstring:(id)a2;
- (BOOL)_paragraphWithContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 exceedsLineLimit:(unsigned long long)a2 orCharacterLimit:(unsigned long long)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })signatureRange:(id)a0;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)authorFirstname:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hmmSignatureRange:(id)a0;
- (id)authorName:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findValediction:(id)a0;

@end
