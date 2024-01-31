@class NSString, WFImage;

@interface WFSelectableAlertButton : WFAlertButton

@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) WFImage *image;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) BOOL stickySelection;

+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 selected:(BOOL)a2 stickySelection:(BOOL)a3 style:(long long)a4 handler:(id /* block */)a5 image:(id)a6;
+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 selected:(BOOL)a2 style:(long long)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;

@end
