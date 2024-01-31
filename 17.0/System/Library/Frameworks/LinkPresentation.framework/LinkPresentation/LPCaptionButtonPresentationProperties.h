@class UIColor, NSString, LPCaptionButtonCollapsedPresentationProperties, NSArray, LPImage, NSAttributedString, NSNumber;

@interface LPCaptionButtonPresentationProperties : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) LPCaptionButtonCollapsedPresentationProperties *collapsedButton;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) double minimumWidth;
@property (retain, nonatomic) NSNumber *requiresInlineButton;

- (void).cxx_destruct;

@end
