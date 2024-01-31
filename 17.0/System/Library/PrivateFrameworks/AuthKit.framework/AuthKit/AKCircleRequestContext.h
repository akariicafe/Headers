@class NSString, AKAppleIDAuthenticationContext, AKCircleRequestPayload;

@interface AKCircleRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identityTokenValue;
@property (retain, nonatomic) NSString *heartbeatTokenValue;
@property (retain, nonatomic) NSString *pushToken;
@property (nonatomic) BOOL _notifyOfTimeout;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;
@property (retain, nonatomic) AKCircleRequestPayload *payload;
@property (nonatomic) BOOL waitForReply;
@property (nonatomic) double waitForReplyTimeout;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
