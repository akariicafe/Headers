@class NSString, UIImage, NSAttributedString, UIMenu;

@interface _SFBarItemConfiguration : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSAttributedString *attributedTitle;

- (id)init;
- (void).cxx_destruct;

@end
