@class UITraitCollection;

@interface _UICalendarDateViewCellState : NSObject

@property (readonly, nonatomic) UITraitCollection *traits;
@property (nonatomic, getter=isOutOfRange) BOOL outOfRange;
@property (nonatomic, getter=isOverhangMonth) BOOL overhangMonth;
@property (nonatomic) BOOL highlightsToday;
@property (nonatomic, getter=isToday) BOOL today;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL forceEmphasizedFont;

- (unsigned long long)hash;
- (id)initWithTraits:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
