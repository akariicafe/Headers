@class SSVRedeemCodeMetadata, SUUIClientContext, NSError, SUUIRedeemConfiguration, SSAccount;

@interface SUUIRedeemPreflightResult : NSObject

@property (retain, nonatomic) SSAccount *account;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) SSVRedeemCodeMetadata *codeMetadata;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) SUUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) long long resultType;

- (void).cxx_destruct;

@end
