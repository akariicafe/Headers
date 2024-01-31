@class NSURL, NSString;

@interface ISBundleIcon : ISConcreteIcon

@property (readonly) NSURL *url;
@property (readonly) NSString *type;
@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;

+ (BOOL)supportsSecureCoding;

- (double)_aspectRatio;
- (id)initWithBundleURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)a0 type:(id)a1;
- (id)initWithBundleURL:(id)a0 fileExtension:(id)a1;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;
- (id)_makeAppResourceProvider;
- (id)_makeDocumentResourceProvider;
- (id)initWithBundleURL:(id)a0 type:(id)a1 tag:(id)a2 tagClass:(id)a3;

@end
