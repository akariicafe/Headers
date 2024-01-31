@class NSAttributedString;

@interface GameCenterUI.DynamicTypeLinkedLabel : GameCenterUI.DynamicTypeLabel {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ linkInteractionDelegate;
}

@property (nonatomic, retain) NSAttributedString *attributedText;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)labelTapped:(id)a0;

@end
