@class SBIconListModel, SBIconListGridCellInfo, NSString;

@interface SBIconListViewLayoutMetrics : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) unsigned long long columns;
@property (nonatomic) unsigned long long rows;
@property (nonatomic) unsigned long long rowsUsedForLayout;
@property (nonatomic) unsigned long long columnsUsedForLayout;
@property (nonatomic) long long columnOffset;
@property (nonatomic) struct CGSize { double width; double height; } iconSpacing;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct CGSize { double width; double height; } alignmentIconSize;
@property (nonatomic) struct CGSize { double width; double height; } iconImageSize;
@property (nonatomic) double iconContentScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } iconInsets;
@property (retain, nonatomic) SBIconListModel *listModel;
@property (retain, nonatomic) SBIconListGridCellInfo *gridCellInfo;
@property (nonatomic) BOOL adjustedInsetsToFit;
@property (nonatomic) BOOL adjustedIconContentScaleToFit;
@property (nonatomic) BOOL needsHorizontalColumnBumps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
