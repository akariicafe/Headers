@class PBUIColorStatistics, NSSet, NSMutableDictionary, NSString;

@interface PRPosterSnapshotBundleBuilder : NSObject {
    NSString *_hardwareIdentifier;
    PBUIColorStatistics *_colorStatistics;
    long long _userInterfaceStyle;
    long long _interfaceOrientation;
    long long _deviceOrientation;
    NSMutableDictionary *_URLResourceKeys;
    NSMutableDictionary *_levelToImage;
}

@property (copy, nonatomic) NSMutableDictionary *fileAttributes;
@property (copy, nonatomic) NSMutableDictionary *URLResourceValues;
@property (readonly, nonatomic) NSSet *capturedSnapshotLevelSets;
@property (readonly, nonatomic) PBUIColorStatistics *capturedColorStatistics;
@property (retain, nonatomic) NSMutableDictionary *infoDictionary;

- (void)reset;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)buildWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_finalizedInfoPlistDictionaryWithSnapshotImageFormat:(id)a0;
- (id)buildWithOutputURL:(id)a0 diskFormat:(id)a1 error:(out id *)a2;
- (BOOL)captureColorStatistics:(id)a0 error:(out id *)a1;
- (BOOL)captureSnapshot:(id)a0 forLevelSet:(id)a1 error:(out id *)a2;
- (id)capturedSnapshotForLevelSet:(id)a0;
- (id)initWithHardwareIdentifier:(id)a0 userInterfaceStyle:(long long)a1 interfaceOrientation:(long long)a2 deviceOrientation:(long long)a3;
- (id)initWithSnapshotBundle:(id)a0;
- (void)updateWithPoster:(id)a0;

@end
