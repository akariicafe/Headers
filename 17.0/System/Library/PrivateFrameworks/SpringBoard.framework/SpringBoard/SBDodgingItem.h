@class SBDodgingResolverViewController, NSArray, NSString, SBDodgingItemPreference, UIView;
@protocol UICoordinateSpace, SBDodgingItemDelegate;

@interface SBDodgingItem : NSObject <NSCopying> {
    SBDodgingResolverViewController *_dodgingResolverViewController;
}

@property (readonly, weak, nonatomic) id<SBDodgingItemDelegate> delegate;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) id<UICoordinateSpace> containerCoordinateSpace;
@property (retain, nonatomic) NSArray *otherDodgingIdentifiers;
@property (retain, nonatomic) SBDodgingItemPreference *preference;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;

- (unsigned long long)hash;
- (id)invalidate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 view:(id)a1 delegate:(id)a2 dodgingResolverViewController:(id)a3;
- (void)setNeedsUpdateAnimated:(BOOL)a0;

@end
