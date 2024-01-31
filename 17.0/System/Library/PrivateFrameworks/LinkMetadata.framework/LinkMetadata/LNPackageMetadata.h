@class NSArray;

@interface LNPackageMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *includes;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)verboseDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFrom:(id)a0 error:(id *)a1;
- (id)_initWithMetadataFileURL:(id)a0 bundleURL:(id)a1 error:(id *)a2;
- (id)initWithIncludes:(id)a0;
- (id)initWithMetadataFileURL:(id)a0 bundleURL:(id)a1 error:(id *)a2;
- (id)linkerSymbolNames;
- (id)resolveWithBundle:(id)a0 error:(id *)a1;
- (BOOL)resolveWithImagePath:(id)a0 executablePath:(id)a1 rpaths:(id)a2 partialResults:(id)a3 error:(id *)a4;

@end
