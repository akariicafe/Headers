@class NSString;

@interface IDSPopupPrompt : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (void).cxx_destruct;
- (void)launchPromptWithButton:(id)a0 defaultUrl:(id)a1 alternateButton:(id)a2 alternateUrl:(id)a3;
- (id)initWithTitle:(id)a0 promptMessage:(id)a1;

@end
