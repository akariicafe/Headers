@class BBAssertion, NSArray, NSString, NSURL, NSDictionary, BSServiceConnectionEndpoint;

@interface BBResponse : NSObject <NSSecureCoding> {
    BBAssertion *_lifeAssertion;
    BOOL _sent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *lifeAssertions;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) NSString *bulletinID;
@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (copy, nonatomic) NSString *buttonID;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSURL *actionLaunchURL;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *replyText;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic) BOOL activated;
@property (nonatomic) BOOL didOpenApplication;

- (void)send;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
