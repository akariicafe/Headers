@class NSString, UIImage;

@interface DOCThumbnailFolderIcon : NSObject {
    double _bottomInset;
    double _sharedBadgeBottomInset;
    struct CGSize { double width; double height; } _badgeSize;
    struct CGSize { double width; double height; } _sharedBadgeSize;
    NSString *_documentsBadgeName;
    NSString *_desktopBadgeName;
    NSString *_sharedBadgeName;
    NSString *_downloadsBadgeName;
    NSString *_genericSharepointBadgeName;
}

@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) UIImage *plainFolderImage;
@property (readonly, nonatomic) UIImage *documentsBadge;
@property (readonly, nonatomic) UIImage *desktopBadge;
@property (readonly, nonatomic) UIImage *sharedBadge;
@property (readonly, nonatomic) UIImage *downloadsBadge;
@property (readonly, nonatomic) UIImage *genericSharepointBadge;
@property (readonly, nonatomic) double imageDimension;
@property (readonly, nonatomic) double bottomInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } badgeSize;

+ (id)folderIcons;
+ (id)_folderIconForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)_folderIconsForImageNamePattern:(id)a0 documentsBadgeNamePattern:(id)a1 desktopBadgeNamePattern:(id)a2 sharedBadgeNamePattern:(id)a3 downloadsBadgeNamePattern:(id)a4 genericSharepointBadgeNamePattern:(id)a5;
+ (id)folderIconForDescriptor:(id)a0;
+ (id)imageWithStyle:(unsigned long long)a0 assetImage:(id)a1;

- (id)image;
- (void).cxx_destruct;
- (id)badgedFolderIconForBadge:(id)a0 style:(unsigned long long)a1;
- (id)_badgedFolderIconForBadge:(id)a0 badgeSize:(struct CGSize { double x0; double x1; })a1 bottomInset:(double)a2 style:(unsigned long long)a3;
- (id)badgeForFolderType:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })badgeSizeForFolderType:(unsigned long long)a0;
- (id)badgedFolderIconForFolderType:(unsigned long long)a0 style:(unsigned long long)a1;
- (double)bottomInsetForFolderType:(unsigned long long)a0;
- (id)initWithImageName:(id)a0 documentsBadgeName:(id)a1 dekstopBadgeName:(id)a2 sharedBadgeName:(id)a3 downloadsBadgeName:(id)a4 genericSharepointBadgeName:(id)a5 imageDimension:(double)a6 badgeDimension:(double)a7 badgeBottomInset:(double)a8 sharedBadgeDimension:(double)a9 sharedBadgeBottomInset:(double)a10;
- (id)plainFolderImageWithStyle:(unsigned long long)a0;
- (void)resolveImage;

@end
