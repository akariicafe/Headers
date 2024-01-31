@class NSString, SXJSONDictionary;

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>

@property (readonly, nonatomic) NSString *stillImageIdentifier;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) BOOL allowsPrerollAds;
@property (readonly, nonatomic) NSString *prerollPlacementIdentifier;
@property (readonly, nonatomic) SXJSONDictionary *advertising;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeString;

@end
