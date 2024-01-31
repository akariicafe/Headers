@class UIFont, NSString, UIImage, UITraitCollection, NSAttributedString, NSCache, EKEvent, UIColor;

@interface CUIKOROccurrenceState : NSObject <CUIKMutableDayOccurrenceState, CUIKOROccurrenceState> {
    BOOL _isPerformingChanges;
    BOOL _didChange;
}

@property (class, readonly, nonatomic) NSCache *locationCache;
@property (class, readonly, nonatomic) NSCache *languageAwareInsetsCache;
@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } defaultPadding;

@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDimmed;
@property (nonatomic) BOOL usesSmallText;
@property (nonatomic) BOOL isVibrant;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) UIColor *displayColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } estimatedTextFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double visibleHeight;
@property (nonatomic) double topYBoundaryForText;
@property (nonatomic) long long birthdayCount;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) long long horizontalSizeClass;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isTentative;
@property (readonly, nonatomic) BOOL needsReply;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isDeclined;
@property (readonly, nonatomic) BOOL hasNewTimeProposed;
@property (readonly, nonatomic) BOOL isBirthday;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *time;
@property (readonly, nonatomic) NSAttributedString *location;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *participants;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *timeTextColor;
@property (readonly, nonatomic) UIColor *locationTextColor;
@property (readonly, nonatomic) UIColor *statusTextColor;
@property (readonly, nonatomic) UIColor *participantsTextColor;
@property (readonly, nonatomic) UIColor *strikethroughColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSpace;
@property (readonly, nonatomic) double minimumNaturalHeightAllText;
@property (readonly, nonatomic) double enoughHeightForOneLine;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } languageAwareInsets;
@property (readonly, nonatomic) BOOL requiresLanguageAwarePadding;
@property (readonly, nonatomic) double totalLanguageAwareHeightPadding;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIFont *primaryTextFont;
@property (readonly, nonatomic) UIFont *secondaryTextFont;
@property (readonly, nonatomic) unsigned long long fontCompressionDegree;
@property (retain, nonatomic) EKEvent *occurrence;
@property (nonatomic) BOOL isProposedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)enoughHeightForOneLineForEvent:(id)a0 usingSmallText:(BOOL)a1 sizeClass:(long long)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultMarginFromEKDayOccurrenceView;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultPaddingFromEKDayOccurrenceView;
+ (BOOL)shouldShowTimeStringForOccurrence:(id)a0;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (id)symbolImageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_verticalContentInset;
- (void)performChangesWithState:(id)a0;
- (id)birthdayIcon;

@end
