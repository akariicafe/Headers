@class UIToolTipInteraction, UIButton;

@interface ICNoteEditorPillOrnamentBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) UIToolTipInteraction *toolTipInteraction;
@property (readonly, nonatomic) UIButton *button;
@property (nonatomic, getter=isUsedInPillOrnament) BOOL usedInPillOrnament;

- (void)setAction:(SEL)a0;
- (void)setMenu:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)menu;
- (void)setTitle:(id)a0;

@end
