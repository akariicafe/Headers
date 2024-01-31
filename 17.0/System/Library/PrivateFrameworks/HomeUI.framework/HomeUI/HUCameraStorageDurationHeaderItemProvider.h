@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithCameraProfiles:(id)a0 displayStyle:(unsigned long long)a1;
- (id)invalidationReasons;

@end
