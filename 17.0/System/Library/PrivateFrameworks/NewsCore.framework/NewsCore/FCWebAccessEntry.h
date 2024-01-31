@class NSString, NSDate;

@interface FCWebAccessEntry : NSObject {
    NSString *_email;
    NSString *_purchaseID;
    NSString *_purchaseReceipt;
    NSDate *_lastRetryAttemptTime;
    NSString *_identifier;
    NSString *_tagID;
}

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *purchaseID;
@property (readonly, nonatomic) NSString *purchaseReceipt;
@property (readonly, nonatomic) NSDate *lastRetryAttemptTime;

- (void).cxx_destruct;

@end
