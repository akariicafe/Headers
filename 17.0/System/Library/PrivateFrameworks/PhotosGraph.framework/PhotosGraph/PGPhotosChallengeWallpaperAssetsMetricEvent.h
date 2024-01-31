@class NSArray, NSString, NSDictionary;

@interface PGPhotosChallengeWallpaperAssetsMetricEvent : PGPhotosChallengeMetricEvent <PLMultiplePayloadsMetricEvent>

@property (readonly, nonatomic) NSArray *payloads;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
