@class NSArray, NSString;

@interface SSUIServiceOptionsAssetMetadata : NSObject <NSCopying, BSXPCSecureCoding>

@property (copy, nonatomic) NSArray *assetDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
