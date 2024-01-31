@class HKQuantity, NSString, ACHEarnedInstance, NSURL, NSArray, NSDictionary, ACHTemplate;

@interface ACHAchievement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *localizationBundleURLString;
@property (retain) NSString *resourceBundleURLString;
@property (retain) NSString *propertyListBundleURLString;
@property (retain) NSString *stickerBundleURLString;
@property (retain) ACHEarnedInstance *relevantEarnedInstance;
@property unsigned long long earnedInstanceCount;
@property (retain) NSURL *localizationBundleURL;
@property (retain) NSURL *resourceBundleURL;
@property (retain) NSURL *propertyListBundleURL;
@property (retain) NSURL *stickerBundleURL;
@property double glyphTextureScale;
@property (retain) NSArray *badgeModelFilenames;
@property (retain) NSArray *textureFilenames;
@property (retain) NSString *glyphTextureFilename;
@property double glyphPositionOffsetX;
@property double glyphPositionOffsetY;
@property (retain) NSString *badgeShapeName;
@property BOOL badgeUsesFullColorEnamel;
@property BOOL unearnedUsesTwoToneEnamel;
@property BOOL faceHasMetalInlay;
@property struct { float red; float green; float blue; } badgeEnamelColor;
@property struct { float red; float green; float blue; } badgeMetalColor;
@property long long badgeModelVersion;
@property BOOL badgeUsesTriColorEnamel;
@property struct { float red; float green; float blue; } enamelTriColor1;
@property struct { float red; float green; float blue; } enamelTriColor2;
@property struct { float red; float green; float blue; } enamelTriColor3;
@property BOOL prerequisiteMet;
@property (copy) NSString *section;
@property (retain) HKQuantity *progress;
@property (retain) HKQuantity *goal;
@property (retain) NSDictionary *customPlaceholderValues;
@property (readonly) BOOL hasClientRequiredURLs;
@property (readonly) ACHTemplate *template;
@property (readonly) NSArray *earnedInstances;
@property (readonly) BOOL unearned;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodable:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTemplate:(id)a0 earnedInstances:(id)a1;
- (id)initWithTemplate:(id)a0 relevantEarnedInstance:(id)a1 earnedInstanceCount:(unsigned long long)a2;
- (id)shallowCopyReplacingEarnedInstances:(id)a0;
- (id)shallowCopyWithRelevantEarnedInstance:(id)a0;

@end
