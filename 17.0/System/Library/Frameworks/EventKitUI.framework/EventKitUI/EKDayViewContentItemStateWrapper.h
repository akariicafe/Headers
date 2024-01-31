@class EKDayViewContentItem, EKEvent, NSString, EKDayViewContent, UITraitCollection;

@interface EKDayViewContentItemStateWrapper : NSObject <CUIKOROccurrenceState> {
    EKDayViewContentItem *_item;
    EKDayViewContent *_content;
}

@property (readonly, nonatomic) EKEvent *occurrence;
@property (readonly, nonatomic) long long birthdayCount;
@property (readonly, nonatomic) BOOL isProposedTime;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isDimmed;
@property (readonly, nonatomic) BOOL usesSmallText;
@property (readonly, nonatomic) BOOL isVibrant;
@property (readonly, nonatomic) double travelTime;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundRect;
@property (readonly, nonatomic) double travelTimeHeight;
@property (readonly, nonatomic) double visibleHeight;
@property (readonly, nonatomic) double topYBoundaryForText;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithContentItem:(id)a0 viewContent:(id)a1;

- (void).cxx_destruct;
- (id)initWithContentItem:(id)a0 viewContent:(id)a1;

@end
