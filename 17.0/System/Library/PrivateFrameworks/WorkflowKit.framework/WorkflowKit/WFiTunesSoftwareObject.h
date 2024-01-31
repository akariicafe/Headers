@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface WFiTunesSoftwareObject : WFiTunesObject <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *artistID;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSArray *screenshotURLs;
@property (readonly, nonatomic) NSArray *iPadScreenshotURLs;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) NSArray *supportedDevices;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL isUniversal;
@property (readonly, nonatomic) BOOL supportsGameCenter;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *releaseNotes;
@property (readonly, nonatomic) NSString *contentRating;
@property (readonly, nonatomic) NSString *minimumOSVersion;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSNumber *averageRating;
@property (readonly, nonatomic) NSNumber *numberOfRatings;
@property (readonly, nonatomic) NSNumber *averageRatingLatestVersion;
@property (readonly, nonatomic) NSNumber *numberOfRatingsLatestVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)fileSizeJSONTransformer;
+ (id)iPadScreenshotURLsJSONTransformer;
+ (id)isUniversalJSONTransformer;
+ (id)lastUpdatedJSONTransformer;
+ (id)screenshotURLsJSONTransformer;
+ (id)supportsGameCenterJSONTransformer;

- (void).cxx_destruct;

@end
