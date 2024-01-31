@class ICPDFEncryptionStateChecker;

@interface ICPDFTextAttachment : ICTextAttachment

@property (copy, nonatomic) ICPDFEncryptionStateChecker *encryptionStateChecker;

- (void).cxx_destruct;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)a0;
- (id)supportedPresentationSizes;

@end
