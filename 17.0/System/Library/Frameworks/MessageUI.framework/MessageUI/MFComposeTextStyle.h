@class NSString;

@interface MFComposeTextStyle : NSObject

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *accessibilityIdenitifier;
@property (readonly, nonatomic) SEL editSelector;
@property (readonly, nonatomic) long long styleType;

+ (id)accessibilityIdenitifierForTextStyleType:(long long)a0;
+ (id)composeTextStyleForTextStyleType:(long long)a0;
+ (SEL)editSelectorForTextStyleType:(long long)a0;
+ (id)imageNameForTextStyleType:(long long)a0;
+ (BOOL)isTextListStyleOrdered:(id)a0;

- (void).cxx_destruct;
- (id)initWithTextStyleType:(long long)a0;

@end
