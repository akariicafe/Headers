@interface NTKWhatsNewFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection

@property (readonly, nonatomic) BOOL hasNewFaces;

+ (id)_gloryBDefaultFacesForDevice:(id)a0;
+ (id)_gloryEDefaultFacesForDevice:(id)a0;
+ (id)_gloryFDefaultFacesForDevice:(id)a0;
+ (id)_graceDefaultFacesForDevice:(id)a0;
+ (id)_legacyDefaultFacesForDevice:(id)a0;
+ (id)_pride2020DefaultFacesForDevice:(id)a0;
+ (id)_spring2020DefaultFacesForDevice:(id)a0;
+ (id)whistlerSubdialsSpring2020ComplicationTypesBySlot;

- (id)initWithDevice:(id)a0;
- (id)title;
- (id)facesForDevice:(id)a0;

@end
