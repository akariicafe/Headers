@class NSURL, NSString;

@interface _GEOCollectionPublisherAttribution : NSObject <GEOCollectionPublisherAttribution>

@property (readonly, nonatomic) NSURL *websiteURL;
@property (readonly, nonatomic) NSString *applicationAdamId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned int iconIdentifier;
@property (readonly, nonatomic) unsigned int logoIdentifier;
@property (readonly, nonatomic) unsigned int logoWithoutPaddingIdentifier;
@property (readonly, nonatomic) unsigned int logoCenteredIdentifier;
@property (readonly, nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (readonly, nonatomic) NSString *themeColorLightMode;
@property (readonly, nonatomic) NSString *themeColorDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPublisherAttributionSource:(id)a0 preferredLanguages:(id)a1;

@end
