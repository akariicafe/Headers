@class NSDictionary, NSString, NSArray, WFTimeInterval, NSDate, NSNumber, NSURL;

@interface WFPodcastEpisodeObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSArray *genres;
@property (readonly, nonatomic) NSNumber *episodeNumber;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) WFTimeInterval *duration;
@property (readonly, nonatomic) NSURL *viewURL;
@property (readonly, nonatomic) NSURL *feedURL;
@property (readonly, nonatomic) NSString *artworkURLTemplate;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)descriptionTextJSONTransformer;
+ (id)durationJSONTransformer;
+ (id)releaseDateJSONTransformer;

- (void).cxx_destruct;

@end
