@class UIColor, NSString, UIImage, NSDate;

@interface CKAssociatedMessageChatItem : CKChatItem

@property (copy, nonatomic) NSString *timestampString;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *associatedChatItemGUID;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) UIImage *attributionImage;
@property (readonly, nonatomic) UIColor *attributionImageTintColor;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustContentAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forChatItemSize:(struct CGSize { double x0; double x1; })a1 transcriptOrientation:(char)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedParentFrameForPositioning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forItemSize:(struct CGSize { double x0; double x1; })a1;
+ (void)applyTransformToView:(id)a0 viewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parentSize:(struct CGSize { double x0; double x1; })a2 forGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAssociatedMessageItemSize:(struct CGSize { double x0; double x1; })a0 parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a2;
+ (double)horizontalOriginForAssociatedMessageItemSize:(struct CGSize { double x0; double x1; })a0 parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a2;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForImageViewWithGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a0 shouldScale:(BOOL)a1 parentSize:(struct CGSize { double x0; double x1; })a2;
+ (double)verticalOriginForAssociatedMessageItemSize:(struct CGSize { double x0; double x1; })a0 parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a2;

- (id)sender;
- (void).cxx_destruct;
- (id)IMAssociatedMessageChatItem;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustContentAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forChatItemSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedParentFrameForPositioning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRelativeToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)horizonalOriginRelativeToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTimestampString;
- (id)loadTranscriptDrawerText;
- (char)transcriptOrientation;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForImageViewWithParentSize:(struct CGSize { double x0; double x1; })a0 shouldScale:(BOOL)a1;
- (double)verticalOriginRelativeToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsDrawerLayout;

@end
