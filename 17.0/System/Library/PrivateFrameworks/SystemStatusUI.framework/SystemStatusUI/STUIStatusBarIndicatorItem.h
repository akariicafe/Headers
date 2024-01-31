@class NSArray, STUIStatusBarImageView, NSString;

@interface STUIStatusBarIndicatorItem : STUIStatusBarItem

@property (copy, nonatomic) NSArray *currentImageNamePrefixes;
@property (retain, nonatomic) STUIStatusBarImageView *imageView;
@property (readonly, nonatomic) NSString *indicatorEntryKey;
@property (readonly, nonatomic) BOOL isTemplateImage;
@property (readonly, nonatomic) BOOL flipsForRightToLeftLayoutDirection;
@property (readonly, nonatomic) long long fontStyle;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)imageViewForIdentifier:(id)a0;
- (id)dependentEntryKeys;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (id)imageNameForUpdate:(id)a0;
- (void).cxx_destruct;
- (id)imageForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (id)systemImageNameForUpdate:(id)a0;
- (void)_create_imageView;
- (BOOL)crossfadeForUpdate:(id)a0;
- (BOOL)useMultiColorSystemImageForUpdate:(id)a0;
- (Class)imageViewClass;

@end
