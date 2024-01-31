@class CLKDevice;

@interface NTKDeviceSpecificFacesArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;

- (id)descriptionText;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)facesForDevice:(id)a0;
- (void)loadFacesWithCompletion:(id /* block */)a0;

@end
