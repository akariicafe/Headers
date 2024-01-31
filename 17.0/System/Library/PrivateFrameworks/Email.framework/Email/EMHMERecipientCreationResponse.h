@class NSString;

@interface EMHMERecipientCreationResponse : AAResponse

@property (copy, nonatomic) NSString *replyToAddress;

+ (id)log;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
