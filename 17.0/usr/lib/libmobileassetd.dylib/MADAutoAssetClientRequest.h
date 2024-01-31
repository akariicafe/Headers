@class SUCoreConnectMessage, NSString, SUCoreConnectClientProxy, MAAutoAssetProgress, NSError, MAAutoAssetStatus, MADAutoAssetTimed;

@interface MADAutoAssetClientRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *clientRequestUUID;
@property (readonly, retain, nonatomic) SUCoreConnectMessage *clientRequestMessage;
@property (readonly, retain, nonatomic) SUCoreConnectClientProxy *clientProgressProxy;
@property (retain, nonatomic) SUCoreConnectMessage *responseMessage;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) NSString *autoAssetJobUUID;
@property (retain, nonatomic) MAAutoAssetProgress *downloadProgress;
@property (retain, nonatomic) MAAutoAssetStatus *autoAssetStatus;
@property (retain, nonatomic) MADAutoAssetTimed *timedTracker;
@property (copy, nonatomic) id /* block */ clientReplyCompletion;

+ (id)responseErrorSummary:(id)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initForClientID:(id)a0 withClientRequestMessage:(id)a1 withClientProgressProxy:(id)a2 withClientReplyCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)summaryWithResponseMessage:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
