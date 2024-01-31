@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_copyWithSubclass:(Class)a0;
- (id)stringRepresentation;
- (void)_setName:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStringRepresentation:(id)a0;
- (BOOL)_requiresRetrieval;
- (void).cxx_destruct;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)_name;
- (id)_bundleIdentifier;
- (id)_bundlePath;
- (void)_setBundlePath:(id)a0;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:(id)a0;
- (BOOL)_isSystem;
- (void)_setBundleIdentifier:(id)a0;

@end
