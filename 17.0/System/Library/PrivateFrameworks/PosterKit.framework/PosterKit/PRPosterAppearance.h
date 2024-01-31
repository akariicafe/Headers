@class PRPosterColor, UIFont;

@interface PRPosterAppearance : NSObject

@property (readonly, nonatomic) PRPosterColor *labelColor;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) unsigned long long preferredTitleAlignment;
@property (readonly, nonatomic) unsigned long long preferredTitleLayout;

- (void).cxx_destruct;
- (id)initWithFont:(id)a0 labelColor:(id)a1 preferredTitleAlignment:(unsigned long long)a2 preferredTitleLayout:(unsigned long long)a3;

@end
