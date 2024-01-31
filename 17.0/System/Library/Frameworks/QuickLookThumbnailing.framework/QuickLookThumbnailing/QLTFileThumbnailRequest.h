@class QLCacheBasicVersionedFileIdentifier, FPItem, FPSandboxingURLWrapper;

@interface QLTFileThumbnailRequest : QLTThumbnailRequest

@property (readonly, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (readonly, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (readonly, nonatomic) QLCacheBasicVersionedFileIdentifier *fileIdentifier;
@property (retain) FPItem *item;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)computeContentType;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 iconMode:(BOOL)a4 error:(id *)a5;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 iconMode:(BOOL)a4 error:(id *)a5 shouldMakeSandboxWrapper:(BOOL)a6;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(BOOL)a3;
- (BOOL)shouldProvideFoldedGenericIcon;

@end
