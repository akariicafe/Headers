@class NSString, NSDictionary;

@interface SFDeviceAssetQuery : NSObject

@property (readonly, nonatomic) struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *ucat;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) BOOL h264;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *mappedProductType;
@property (readonly, nonatomic) NSString *effectiveProductType;
@property (readonly, nonatomic) NSString *color;
@property (readonly, nonatomic) NSDictionary *additionalQueryParameters;
@property (nonatomic) BOOL legacyAsset;

+ (BOOL)deviceWantsH264;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetType:(id)a0 productType:(id)a1;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)a0 color:(unsigned long long)a1;
- (id)initWithHomePodColor:(unsigned long long)a0;
- (id)initWithHomePodColor:(unsigned long long)a0 version:(unsigned int)a1;
- (id)initWithProductType:(id)a0 additionalQueryParameters:(id)a1;
- (id)initWithSingleHomePodColor:(unsigned char)a0 version:(unsigned int)a1;
- (id)initWithTagColor:(unsigned long long)a0;
- (id)loggingProductType;

@end
