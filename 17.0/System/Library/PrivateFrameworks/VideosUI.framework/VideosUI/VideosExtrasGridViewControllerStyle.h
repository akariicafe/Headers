@class UIColor, NSString, NSDictionary, VideosExtrasGridCellStyle, VideosExtrasGridHeaderStyle, VideosExtrasGridSectionHeaderStyle;

@interface VideosExtrasGridViewControllerStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewInsets;
@property (retain, nonatomic) NSString *detailTextStyle;
@property (retain, nonatomic) NSDictionary *detailDefaultFontAttributes;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } detailInsets;
@property (retain, nonatomic) VideosExtrasGridHeaderStyle *headerStyle;
@property (retain, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionHeaderStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *defaultCellStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *imageCellStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *videoCellStyle;
@property (retain, nonatomic) VideosExtrasGridCellStyle *productCellStyle;
@property (nonatomic) double defaultSpacing;
@property (nonatomic) double imageSpacing;
@property (nonatomic) double videoSpacing;
@property (nonatomic) double productSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultCellSectionInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageCellSectionInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } videoCellSectionInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } productCellSectionInsets;
@property (nonatomic) double cellLineSpacing;
@property (nonatomic) BOOL showsScrollFade;
@property (nonatomic) BOOL adjustsContentInsetByBottomNavBar;

- (void).cxx_destruct;

@end
