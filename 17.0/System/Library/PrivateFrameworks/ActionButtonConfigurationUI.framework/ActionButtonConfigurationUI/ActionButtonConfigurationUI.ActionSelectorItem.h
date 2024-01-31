@class NSString, UIColor, UIImage;

@interface ActionButtonConfigurationUI.ActionSelectorItem : NSObject <ABActionItem> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ canBeHighlighted;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) UIImage *image;

- (id)init;
- (void).cxx_destruct;

@end
