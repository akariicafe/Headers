@class NSString, NSDictionary, NSUUID, HMFActivity;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL requiresModelCreation;
@property BOOL disallowsModelCreation;
@property (readonly, copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSDictionary *messagePayload;
@property (retain, nonatomic) NSString *messageName;
@property (copy, nonatomic) id /* block */ messageResponseHandler;
@property (retain, nonatomic) NSUUID *messageTransactionIdentifier;
@property (nonatomic) BOOL shouldEnqueueMirrorOutput;
@property (nonatomic) BOOL shouldRollBackIfMirrorOutputFails;
@property (nonatomic) BOOL disallowsCellularAccessForMirrorOutput;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) HMFActivity *activity;
@property (nonatomic) unsigned long long transactionItemsBatchLimit;

+ (id)optionsWithLabel:(id)a0;
+ (id)optionsWithMessage:(id)a0;

- (unsigned long long)hash;
- (id)initWithLabel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
