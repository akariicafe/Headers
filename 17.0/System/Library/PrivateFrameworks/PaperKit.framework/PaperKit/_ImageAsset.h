@class UIImage;

@interface _ImageAsset : NSObject

@property (readonly, nonatomic) UIImage *image;

- (unsigned long long)mediaSubtypes;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })acceptableCropRect;
- (id)localCreationDate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredCropRect;
- (id)initWithImage:(id)a0;
- (BOOL)isInCloud;
- (BOOL)isFavorite;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (BOOL)representsBurst;
- (float)audioScore;
- (Class)defaultImageProviderClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceAreaRect;
- (long long)isContentEqualTo:(id)a0;
- (BOOL)isEligibleForAutoPlayback;
- (BOOL)isInSharedLibrary;
- (long long)playbackStyle;
- (unsigned long long)thumbnailIndex;

@end
