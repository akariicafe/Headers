@class NSDictionary;

@interface WFUserPromptOperation : WFOperation

@property (nonatomic) long long result;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSDictionary *userResponse;

+ (id)sharedMapTable;

- (void)start;
- (void).cxx_destruct;
- (void)_showPrompt;
- (void)_notification:(struct __CFUserNotification { } *)a0 didFinishWithResponse:(unsigned long long)a1;
- (id)initWithOptions:(id)a0 timeout:(double)a1;
- (id)initWithOptions:(id)a0 timeout:(double)a1 flags:(unsigned long long)a2;

@end
