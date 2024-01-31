@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherAirQualitySnippet : SAUISnippet

@property (copy, nonatomic) NSArray *aceAirQualities;
@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (retain, nonatomic) SAUIImageResource *attributionImage;

+ (id)airQualitySnippetWithDictionary:(id)a0 context:(id)a1;
+ (id)airQualitySnippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
