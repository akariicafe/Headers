@class PBFPosterGalleryLayout, NSDictionary, NSString, NSLocale;

@interface PBFBasicPosterGalleryLayoutProvider : NSObject <PBFPosterGalleryLayoutProviding>

@property (copy, nonatomic) NSDictionary *posterDescriptorsByExtensionBundleIdentifier;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) PBFPosterGalleryLayout *galleryLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
