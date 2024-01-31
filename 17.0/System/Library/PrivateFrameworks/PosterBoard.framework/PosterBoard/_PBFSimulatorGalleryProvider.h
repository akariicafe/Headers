@class NSString, NSDictionary, NSLocale, ATXFaceGalleryConfiguration;

@interface _PBFSimulatorGalleryProvider : NSObject <PBFGalleryProviding> {
    NSDictionary *_receivedDescriptors;
    NSLocale *_receivedLocale;
    ATXFaceGalleryConfiguration *_generatedGallery;
}

@property (class, readonly, nonatomic) _PBFSimulatorGalleryProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
