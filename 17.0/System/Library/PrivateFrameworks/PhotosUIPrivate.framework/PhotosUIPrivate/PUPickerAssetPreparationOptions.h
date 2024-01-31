@interface PUPickerAssetPreparationOptions : NSObject

@property (readonly, nonatomic) BOOL shouldIncludeLocation;
@property (readonly, nonatomic) BOOL shouldIncludeCaption;
@property (readonly, nonatomic) long long userEncodingPolicy;

- (id)init;
- (id)initWithIncludeLocation:(BOOL)a0 includeCaption:(BOOL)a1 userEncodingPolicy:(long long)a2;

@end
