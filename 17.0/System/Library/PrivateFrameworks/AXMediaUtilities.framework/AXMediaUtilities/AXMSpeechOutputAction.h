@class NSString;

@interface AXMSpeechOutputAction : AXMOutputAction {
    NSString *_text;
}

@property (readonly, nonatomic) NSString *text;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;

@end
