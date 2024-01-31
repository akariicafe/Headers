@class NSString, NSArray, GEOMapItemAttribution;

@interface _MKMapItemAttribution : NSObject {
    GEOMapItemAttribution *_geoAttribution;
}

@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSArray *attributionURLs;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSString *captionDisplayName;
@property (readonly, nonatomic) BOOL requiresAttributionInCallout;
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;
@property (readonly, nonatomic) NSString *appAdamID;

+ (id)attributionFromEncyclopedicInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithGEOMapItemAttribution:(id)a0;
- (id)providerImageAtPath:(id)a0 scale:(double)a1 isTemplate:(BOOL)a2;
- (id)providerLogoImageForScale:(double)a0;
- (id)providerSnippetLogoImageForScale:(double)a0;

@end
