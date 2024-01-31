@class NSString, SUUILink;
@protocol SUUIArtworkProviding;

@interface SUUIMediaComponent : SUUIPageComponent <SSMetricsEventFieldProvider>

@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) SUUILink *link;
@property (readonly, nonatomic) long long mediaIdentifier;
@property (readonly, nonatomic) long long mediaAppearance;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSString *mediaURLString;
@property (readonly, nonatomic) id<SUUIArtworkProviding> thumbnailArtworkProvider;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) float titleFontSize;
@property (readonly, nonatomic) long long titleFontWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)componentType;
- (id)valueForMetricsField:(id)a0;
- (id)initWithArtwork:(id)a0;
- (id)bestThumbnailArtwork;
- (id)bestThumbnailForWidth:(double)a0;
- (id)initWithArtworkProvider:(id)a0;
- (id)initWithArtworkProvider:(id)a0 appearance:(long long)a1;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)metricsElementName;

@end
