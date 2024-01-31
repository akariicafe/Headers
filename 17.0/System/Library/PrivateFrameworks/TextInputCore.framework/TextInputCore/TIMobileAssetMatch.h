@class NSArray;

@interface TIMobileAssetMatch : NSObject

@property (readonly, nonatomic) NSArray *types;
@property (readonly, nonatomic) NSArray *inputModeLevels;
@property (readonly, nonatomic) NSArray *regions;

+ (id)knownAssetRegionAttributes;
+ (id)mobileAssetMatchWithTypes:(id)a0 inputModeLevels:(id)a1 regions:(id)a2;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTypes:(id)a0 inputModeLevels:(id)a1 regions:(id)a2;

@end
