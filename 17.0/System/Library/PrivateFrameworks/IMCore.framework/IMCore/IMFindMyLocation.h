@class FMFLocation, NSString, FMLLocation;

@interface IMFindMyLocation : NSObject

@property (readonly, nonatomic) FMFLocation *fmfLocation;
@property (readonly, nonatomic) FMLLocation *fmlLocation;
@property (readonly, nonatomic) NSString *shortAddress;

+ (id)locationWithFMFLocation:(id)a0;
+ (id)locationWithFMFLocation:(id)a0 fmlLocation:(id)a1;
+ (id)locationWithFMLLocation:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFMFLocation:(id)a0 fmlLocation:(id)a1;

@end
