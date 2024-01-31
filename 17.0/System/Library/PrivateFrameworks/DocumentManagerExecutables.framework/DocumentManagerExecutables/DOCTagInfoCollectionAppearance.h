@class NSString;

@interface DOCTagInfoCollectionAppearance : NSObject <DOCTagInfoCollectionAppearanceProviding>

@property (readonly) NSString *labelFontStyle;
@property (readonly) double horizontalTagSpacing;
@property (readonly) double verticalTagSpacing;
@property (readonly) double tagToLabelSpacing;
@property (readonly) double cellCornerRadius;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } cellContentInsets;
@property (readonly) double dimmingAlphaDuringMenuPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;

@end
