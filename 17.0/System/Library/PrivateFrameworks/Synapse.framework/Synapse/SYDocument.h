@class NSURL, FPSandboxingURLWrapper;

@interface SYDocument : NSObject <NSCopying, NSSecureCoding> {
    FPSandboxingURLWrapper *_urlWrapper;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;

+ (id)documentFromData:(id)a0;

- (id)initWithFileURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)documentAttributesWithError:(id *)a0;
- (id)initWithURLWrapper:(id)a0;
- (BOOL)setDocumentAttributes:(id)a0 withError:(id *)a1;

@end
