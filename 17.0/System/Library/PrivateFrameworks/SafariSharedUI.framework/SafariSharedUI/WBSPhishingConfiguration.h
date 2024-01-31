@class NSString, NSArray, NSDictionary;

@interface WBSPhishingConfiguration : NSObject <WBSRemotePlistSnapshot> {
    NSArray *_overrides;
    NSDictionary *_domains;
    NSDictionary *_imageClassifierIdentifiers;
}

@property (readonly, nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageInputSize;
@property (readonly, nonatomic) NSString *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)plistDataWithFormat:(unsigned long long)a0;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)_parseDomains:(id)a0 error:(id *)a1;
- (BOOL)_parseImageClassifierIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)_parseOverrides:(id)a0 error:(id *)a1;
- (id)_sanitizeURL:(id)a0;
- (unsigned long long)classifyURL:(id)a0 error:(id *)a1;
- (unsigned long long)classifyURL:(id)a0 imageClassifierIdentifier:(id)a1 imageClassifierConfidence:(float)a2 error:(id *)a3;

@end
