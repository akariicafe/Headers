@class UIColor, NSString;
@protocol DOCTagContainerAppearanceProviding;

@interface DOCTagMakerAppearance : NSObject <DOCTagMakerAppearanceProviding>

@property (readonly) id<DOCTagContainerAppearanceProviding> container;
@property (readonly) BOOL inputFieldShowsLeadingDot;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } inputFieldRoundedCornerBackgroundMargins;
@property (readonly) double rowOfTagsDotSize;
@property (readonly) double rowOfTagsDotSelectionBorderWidth;
@property (readonly) UIColor *rowOfTagsDotSelectionBorderColor;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } rowOfTagsContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;

@end
