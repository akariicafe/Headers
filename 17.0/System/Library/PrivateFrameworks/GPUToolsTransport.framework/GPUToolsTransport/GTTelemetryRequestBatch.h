@class NSArray;

@interface GTTelemetryRequestBatch : NSObject

@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSArray *requests;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initNoRequestID;

@end
