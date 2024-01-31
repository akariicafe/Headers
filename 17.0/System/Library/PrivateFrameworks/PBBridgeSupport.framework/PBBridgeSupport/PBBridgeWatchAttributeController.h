@class NSCache, NRDevice;

@interface PBBridgeWatchAttributeController : NSObject

@property (retain, nonatomic) NSCache *stringCache;
@property (readonly, nonatomic) unsigned long long stingButtonColor;
@property (readonly, nonatomic) unsigned long long edition;
@property (readonly, nonatomic) unsigned long long material;
@property (readonly, nonatomic) unsigned long long internalSize;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long hardwareBehavior;
@property (readonly, nonatomic) BOOL hasTwoYearWarranty;
@property (retain, nonatomic) NRDevice *device;

+ (id)sharedDeviceController;
+ (unsigned short)sizeFromInternalSize:(unsigned long long)a0;
+ (unsigned long long)sizeFromDevice:(id)a0;
+ (unsigned long long)materialFromDevice:(id)a0;
+ (unsigned long long)_materialForCLHSValue:(unsigned long long)a0;
+ (id)editionDescription:(unsigned long long)a0;
+ (id)hwBehaviorDescription:(unsigned long long)a0;
+ (id)materialDescription:(unsigned long long)a0;
+ (id)materialKeyColorForMaterial:(unsigned long long)a0;
+ (id)resourceString:(id)a0 material:(unsigned long long)a1 size:(unsigned long long)a2 forAttributes:(unsigned long long)a3;
+ (id)sizeDescription:(unsigned long long)a0;
+ (id)stingMaterialDescription:(unsigned long long)a0;

- (id)init;
- (id)attributesDescription;
- (void).cxx_destruct;
- (void)setMaterial:(unsigned long long)a0;
- (void)_populateMaterialDetailsWithDMinProperties:(id)a0;
- (void)_setMaterialWithCLHSValue:(unsigned long long)a0;
- (unsigned long long)fallbackMaterialForSize:(unsigned long long)a0;
- (id)getGestaltDmin;
- (id)materialKeyColor;
- (id)resourceString:(id)a0 forAttributes:(unsigned long long)a1;
- (void)setInternalSize:(unsigned long long)a0;

@end
