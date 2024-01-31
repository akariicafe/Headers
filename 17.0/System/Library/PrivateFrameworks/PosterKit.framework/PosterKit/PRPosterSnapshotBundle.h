@class PBUIColorStatistics, NSUUID, NSURL, PBUIImageOnDiskFormat, NSDate, NSString, NSDictionary, NSArray, UIImage;

@interface PRPosterSnapshotBundle : NSObject {
    PBUIColorStatistics *_colorStatistics;
    NSDictionary *_levelToImage;
}

@property (readonly, nonatomic) PBUIColorStatistics *colorStatistics;
@property (readonly, nonatomic) PBUIImageOnDiskFormat *ondiskFormat;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly) BOOL isValidBundle;
@property (readonly, copy) NSDate *dateCreated;
@property (readonly, copy) NSUUID *posterUUID;
@property (readonly, copy) NSString *posterProvider;
@property (readonly, copy) NSString *hardwareIdentifier;
@property (readonly, copy) NSString *snapshotDefinitionIdentifier;
@property (readonly, copy) NSString *bootSessionidentifier;
@property (readonly, copy) NSArray *snapshotLevelSets;
@property (readonly) unsigned long long snapshotEpoch;
@property (readonly) unsigned long long snapshotBundleVersion;
@property (readonly) unsigned long long posterVersion;
@property (readonly) struct CGSize { double x0; double x1; } assetSize;
@property (readonly) long long interfaceOrientation;
@property (readonly) long long deviceOrientation;
@property (readonly) long long userInterfaceStyle;
@property (readonly) double snapshotScale;
@property (readonly, copy) UIImage *foregroundSnapshot;
@property (readonly, copy) UIImage *floatingSnapshot;
@property (readonly, copy) UIImage *backgroundSnapshot;
@property (readonly, copy) UIImage *compositeSnapshot;

+ (id)dateFormatter;
+ (id)currentSnapshotBundleEpochAndVersion;
+ (id)snapshotBundleAtURL:(id)a0 error:(out id *)a1;
+ (id)snapshotBundleForInfoDictionary:(id)a0 levelToImage:(id)a1 colorStatistics:(id)a2 error:(out id *)a3;

- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)snapshotForLevelSet:(id)a0;
- (id)_decodeImageForComponent:(long long)a0 error:(out id *)a1;
- (id)URLForComponent:(long long)a0;
- (id)_decodeImageForLevelSet:(id)a0 error:(out id *)a1;
- (id)imageForComponent:(long long)a0;
- (id)initWithInfoDictionary:(id)a0 levelToImage:(id)a1;
- (id)initWithInfoDictionary:(id)a0 levelToImage:(id)a1 colorStatistics:(id)a2;
- (BOOL)isEqualToSnapshotBundle:(id)a0;
- (BOOL)setInfoDictionary:(id)a0 error:(out id *)a1;
- (BOOL)updateInfoDictionary:(id)a0 error:(out id *)a1;

@end
