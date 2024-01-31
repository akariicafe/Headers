@class NSString;

@interface CEMAssetReference : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly) int assettype;

+ (id)referenceForIdentifier:(id)a0 assetschematype:(id)a1;
+ (id)referenceForIdentifier:(id)a0 assettype:(int)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 assettype:(int)a1;

@end
