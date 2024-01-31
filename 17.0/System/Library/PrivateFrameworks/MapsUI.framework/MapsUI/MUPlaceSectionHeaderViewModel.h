@class NSString, UIMenu;

@interface MUPlaceSectionHeaderViewModel : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *subtitleString;
@property (retain, nonatomic) NSString *seeMoreButtonText;
@property (retain, nonatomic) UIMenu *seeMoreButtonMenu;

+ (id)viewModelForTitle:(id)a0 attribution:(id)a1 target:(id)a2 action:(SEL)a3;

- (void).cxx_destruct;
- (id)initWithTitleString:(id)a0;
- (id)initWithTitleString:(id)a0 showSeeMore:(BOOL)a1;
- (id)initWithTitleString:(id)a0 subtitleString:(id)a1 showSeeMore:(BOOL)a2;
- (void)setTarget:(id)a0 selector:(SEL)a1;

@end
