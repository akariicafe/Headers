@class NSString, NSData;

@interface IMTypingIndicatorPipelineParameter : IMTextMessagePipelineParameter

@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *balloonPluginBundleID;
@property (copy, nonatomic) NSData *typingIndicatorIconData;

- (void).cxx_destruct;
- (id)initWithBDBasic:(id)a0 idsTrustedData:(id)a1;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;

@end
