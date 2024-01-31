@class NSString;

@interface WLSocketCommandMessage : WLSocketMessage

@property (copy, nonatomic) NSString *command;

- (void).cxx_destruct;
- (id)initWithCommandString:(id)a0;

@end
