@class PRTimeFontConfiguration;

@interface PREditingFontPickerItem : NSObject

@property (retain, nonatomic) PRTimeFontConfiguration *fontConfiguration;
@property (nonatomic, getter=isSystemItem) BOOL systemItem;

- (void).cxx_destruct;
- (id)initWithFontConfiguration:(id)a0 systemItem:(BOOL)a1;

@end
