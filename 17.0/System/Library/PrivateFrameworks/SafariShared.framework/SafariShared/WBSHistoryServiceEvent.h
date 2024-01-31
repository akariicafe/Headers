@class NSString, NSDictionary, NSDate;

@interface WBSHistoryServiceEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long eventID;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSDate *time;
@property (readonly, copy, nonatomic) NSDictionary *value;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventID:(long long)a0 type:(id)a1 time:(id)a2 value:(id)a3;
- (id)initWithType:(id)a0 time:(id)a1 value:(id)a2;

@end
