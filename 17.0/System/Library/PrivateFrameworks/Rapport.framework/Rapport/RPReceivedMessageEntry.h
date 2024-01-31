@class NSString, NSDictionary, NSNumber;

@interface RPReceivedMessageEntry : NSObject

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *event;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSNumber *sessionID;

- (void).cxx_destruct;

@end
