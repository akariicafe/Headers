@class NSString;

@interface SBInsertionDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2;

@end
