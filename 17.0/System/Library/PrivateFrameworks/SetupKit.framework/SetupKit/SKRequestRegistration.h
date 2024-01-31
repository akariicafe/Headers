@class NSString, NSDictionary;

@interface SKRequestRegistration : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
