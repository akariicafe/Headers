@class NSObject;
@protocol OS_dispatch_queue;

@interface CCUISensorEntityIconCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;
+ (struct CGSize { double x0; double x1; })iconSize;

- (id)_init;
- (id)_keyboardSettingsIcon;
- (void)preheatImageForSensorEntity:(id)a0;
- (id)_imageInBundle:(id)a0 named:(id)a1 needsTreatment:(BOOL)a2;
- (id)continuityCaptureIconForExtensionIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)imageForEntity:(id)a0;

@end
