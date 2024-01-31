@class UIFont;

@interface _UIDocumentPickerCellFontManager : NSObject

@property (retain, nonatomic) UIFont *titleFontForGridLayout;
@property (retain, nonatomic) UIFont *subtitleFontForGridLayout;
@property (retain, nonatomic) UIFont *titleFontForTableLayout;
@property (retain, nonatomic) UIFont *subtitleFontForTableLayout;

+ (id)sharedFontManager;

- (id)init;
- (void).cxx_destruct;
- (void)cacheFonts;

@end
