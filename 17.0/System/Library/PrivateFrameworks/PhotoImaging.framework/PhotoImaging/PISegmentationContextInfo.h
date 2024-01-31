@class NSString, PFWallpaperCompoundDeviceConfiguration;

@interface PISegmentationContextInfo : NSObject

@property (copy, nonatomic) NSString *systemName;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) long long sourceMode;
@property (nonatomic) BOOL segmentationDisabled;
@property (nonatomic) long long infillAlgorithm;
@property (retain, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (nonatomic) unsigned long long role;

+ (id)currentContextInfo;

- (void).cxx_destruct;

@end
