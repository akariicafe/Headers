@class NADescriptionBuilder, NSString, NAIdentity, NSURL, UIImage;

@interface WKAbstractWallpaper : NSObject <WKDescribable, NAIdentifiable, WKWallpaper>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long representedType;
@property (nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id /* block */ descriptionBuilderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

+ (id)new;

- (id)init;
- (id)propertyListRepresentation;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 type:(unsigned long long)a2 representedType:(unsigned long long)a3 backingType:(unsigned long long)a4;

@end
