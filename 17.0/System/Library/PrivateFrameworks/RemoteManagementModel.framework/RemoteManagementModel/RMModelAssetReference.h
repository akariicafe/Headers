@class NSString, NSArray;

@interface RMModelAssetReference : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *assetTypes;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 assetTypes:(id)a1;

@end
