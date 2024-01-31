@class NSString;

@interface SAUIAssistantTipView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSString *flowIdentifier;
@property (copy, nonatomic) NSString *tipPrefix;

+ (id)assistantTipView;
+ (id)assistantTipViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
