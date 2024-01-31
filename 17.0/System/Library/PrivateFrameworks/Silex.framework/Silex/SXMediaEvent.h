@class NSString, NSDictionary;

@interface SXMediaEvent : SXAnalyticsEvent

@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) unsigned long long galleryType;
@property (nonatomic) unsigned long long videoType;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *componentIdentifier;
@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *componentRole;
@property (retain, nonatomic) NSDictionary *metaData;

- (void).cxx_destruct;

@end
