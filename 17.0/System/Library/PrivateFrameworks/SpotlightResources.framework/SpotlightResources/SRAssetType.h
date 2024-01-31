@class NSString, NSSet;

@interface SRAssetType : NSObject

@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *xpcName;
@property (copy, nonatomic) NSSet *contentTypes;
@property (nonatomic) long long compatibilityVersion;

- (void).cxx_destruct;

@end
