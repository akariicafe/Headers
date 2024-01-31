@class NSArray;
@protocol WFCompactAppearanceProvider;

@interface WFCompactActionGroupView : UIStackView

@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithActions:(id)a0 appearanceProvider:(id)a1;

@end
