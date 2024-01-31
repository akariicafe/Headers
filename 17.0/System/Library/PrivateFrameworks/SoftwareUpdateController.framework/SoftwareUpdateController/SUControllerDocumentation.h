@class NSURL, NSData, NSString;

@interface SUControllerDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *localBundleURL;
@property (retain, nonatomic) NSURL *serverAssetURL;
@property (retain, nonatomic) NSData *serverAssetMeasurement;
@property (retain, nonatomic) NSString *serverAssetAlgorithm;
@property (nonatomic) long long serverAssetChunkSize;
@property (retain, nonatomic) NSData *releaseNotesSummary;
@property (retain, nonatomic) NSData *releaseNotes;
@property (retain, nonatomic) NSData *licenseAgreement;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSString *currentLanguage;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_resourceFromBundle:(struct __CFBundle { } *)a0 forKey:(id)a1;
- (void)_loadBundleResources;
- (id)initWithDocumentationBundleURL:(id)a0 serverAssetURL:(id)a1 serverAssetMeasurement:(id)a2 serverAssetAlgorithm:(id)a3 serverAssetChunkSize:(long long)a4;

@end
