@class NSString, UIHoverStyle, UIImageSymbolConfiguration;
@protocol DOCTagContainerAppearanceProviding;

@interface DOCTagListCellAppearance : NSObject <DOCTagPickerCellAppearanceProviding>

@property (readonly) id<DOCTagContainerAppearanceProviding> container;
@property (readonly) BOOL addTagCellShowsDashedBorder;
@property (readonly) UIImageSymbolConfiguration *checkmarkImageConfiguration;
@property (readonly) NSString *titleTextStyle;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } cellExternalMargins;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } cellInteriorLayoutMargins;
@property (readonly) UIHoverStyle *cellContentHoverStyle;
@property (readonly) double dotSize;
@property (readonly) double cellCornerRadius;
@property (readonly) double spacing_leadingEdgeToDot;
@property (readonly) double spacing_dotToTitle;
@property (readonly) double spacing_trailingEdgeToCheckmark;
@property (readonly) double spacing_titleToCheckmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (id)backgroundColorForTag:(id)a0 selected:(BOOL)a1;
- (id)checkmarkImageColorForTag:(id)a0;

@end
