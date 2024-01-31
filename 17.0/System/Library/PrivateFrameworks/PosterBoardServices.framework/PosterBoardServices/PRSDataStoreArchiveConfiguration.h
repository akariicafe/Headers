@interface PRSDataStoreArchiveConfiguration : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL stripScreenshots;
@property (nonatomic) BOOL stripDescriptors;
@property (nonatomic) BOOL stripContentsOfConfigurations;
@property (nonatomic) BOOL reapNonLatestEntries;

+ (id)cliOptions;
+ (id)dataStoreArchiveConfigurationFromArgs:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
