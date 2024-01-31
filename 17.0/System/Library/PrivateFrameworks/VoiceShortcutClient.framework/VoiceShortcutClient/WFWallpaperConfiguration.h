@class NSString, NSSecurityScopedURLWrapper, NSURL, NSNumber;

@interface WFWallpaperConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSecurityScopedURLWrapper *assetURLWrapper;
@property (readonly, nonatomic) NSURL *assetURL;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) NSNumber *usePreview;
@property (readonly, nonatomic) NSNumber *legibilityBlur;
@property (readonly, nonatomic) NSNumber *smartCrop;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUserInfo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 location:(long long)a1 legibilityBlur:(id)a2 smartCrop:(id)a3 usePreview:(id)a4;
- (id)initWithAssetURL:(id)a0 localIdentifier:(id)a1 location:(long long)a2 legibilityBlur:(id)a3 smartCrop:(id)a4 usePreview:(id)a5;
- (id)initWithLocalIdentifier:(id)a0 location:(long long)a1 legibilityBlur:(id)a2 smartCrop:(id)a3 usePreview:(id)a4;
- (id)userInfoRepresentation;

@end
