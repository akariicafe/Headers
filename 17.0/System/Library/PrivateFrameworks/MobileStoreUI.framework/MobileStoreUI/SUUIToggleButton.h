@class NSString, SUUIButtonViewElement, SUUIAttributedStringLayout;
@protocol SUUIToggleButtonDelegate;

@interface SUUIToggleButton : SUUIStyledButton <SUUIToggleItemStateCenterObserver> {
    NSString *_itemIdentifier;
    SUUIAttributedStringLayout *_nonToggledLayout;
    NSString *_titleToggleString;
    SUUIAttributedStringLayout *_toggledLayout;
}

@property (nonatomic) long long autoIncrementCount;
@property (nonatomic) long long count;
@property (weak, nonatomic) SUUIButtonViewElement *element;
@property (retain, nonatomic) NSString *toggleItemIdentifier;
@property (retain, nonatomic) NSString *nonToggledTitle;
@property (retain, nonatomic) NSString *toggledTitle;
@property (retain, nonatomic) id nonToggledContents;
@property (retain, nonatomic) id toggledContents;
@property (nonatomic) long long toggleButtonType;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (nonatomic) BOOL autoIncrement;
@property (weak, nonatomic) id<SUUIToggleButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_titleAttributes;
- (void)_sendDidAnimate;
- (id)_layoutForString:(id)a0;
- (id)_nonToggledLayout;
- (void)_sendWillAnimate;
- (void)_showToggleState:(BOOL)a0;
- (id)_toggledLayout;
- (void)itemStateCenter:(id)a0 itemStateChanged:(id)a1;
- (void)setButtonTitleText:(id)a0;
- (void)setToggled:(BOOL)a0 animated:(BOOL)a1;

@end
