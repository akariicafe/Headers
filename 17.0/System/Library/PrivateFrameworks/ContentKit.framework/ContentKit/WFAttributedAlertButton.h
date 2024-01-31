@class NSString, NSAttributedString;

@interface WFAttributedAlertButton : WFSelectableAlertButton

@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, copy, nonatomic) NSString *label;

+ (id)buttonWithAttributedTitle:(id)a0 label:(id)a1 selected:(BOOL)a2 style:(long long)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;

@end
