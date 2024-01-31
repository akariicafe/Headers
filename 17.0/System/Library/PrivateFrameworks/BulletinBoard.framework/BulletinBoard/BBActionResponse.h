@class NSString, NSDictionary, NSURL, BSServiceConnectionEndpoint;

@interface BBActionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (nonatomic) BOOL didOpenApplication;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSURL *actionLaunchURL;
@property (copy, nonatomic) NSString *bulletinButtonID;
@property (copy, nonatomic) NSString *bulletinRecordID;
@property (copy, nonatomic) NSString *bulletinPublisherID;
@property (copy, nonatomic) NSDictionary *bulletinContext;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint;

+ (id)actionResponseForResponse:(id)a0 bulletinRequest:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
