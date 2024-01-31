@class NSString, NSDate;

@interface WBSParsecSubscriptionInfo : NSObject

@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)_initWithDictionary:(id)a0;

@end
