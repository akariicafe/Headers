@class PFWallpaperCompoundDeviceConfiguration, NSString, NSArray, NSDictionary, PFPosterShuffleConfiguration, PFPosterEditConfiguration;

@interface PFPosterConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long posterType;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long configurationType;
@property (nonatomic) long long options;
@property (retain, nonatomic) NSArray *media;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration;
@property (retain, nonatomic) PFPosterShuffleConfiguration *shuffleConfiguration;
@property (retain, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadFromURL:(id)a0 error:(id *)a1;

- (id)analyticsPayload;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfigurationType:(long long)a0;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)mediaAnalyticsPayload;

@end
