@class UIResponder, UIWindow;
@protocol NSCopying;

@interface UIEditMenuConfiguration : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (nonatomic) struct CGPoint { double x; double y; } sourcePoint;
@property (nonatomic) BOOL _ignoresPassthroughInView;
@property (weak, nonatomic) UIResponder *_firstResponderTarget;
@property (weak, nonatomic) UIWindow *_overrideSourceWindow;
@property (nonatomic) BOOL _containsTextReplacement;
@property (nonatomic) long long preferredArrowDirection;

+ (id)configurationWithIdentifier:(id)a0 sourcePoint:(struct CGPoint { double x0; double x1; })a1;

- (id)description;
- (void).cxx_destruct;

@end
