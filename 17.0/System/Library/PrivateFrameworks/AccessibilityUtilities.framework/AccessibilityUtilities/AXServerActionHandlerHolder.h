@class NSString;

@interface AXServerActionHandlerHolder : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;

@end
