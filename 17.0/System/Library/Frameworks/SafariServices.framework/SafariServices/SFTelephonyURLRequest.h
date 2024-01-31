@class NSString;

@interface SFTelephonyURLRequest : NSObject

@property (retain, nonatomic) NSString *successNotificationName;
@property (retain, nonatomic) NSString *failureNotificationName;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
