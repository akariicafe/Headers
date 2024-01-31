@class NSArray, PKApplicationMessage;

@interface PKApplicationMessageNodeTerminal : PKApplicationMessageNode

@property (readonly, nonatomic) PKApplicationMessage *message;
@property (readonly, nonatomic) NSArray *children;

- (void).cxx_destruct;

@end
