@class NSString, NSDictionary;

@interface RPEventRegistration : NSObject

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
