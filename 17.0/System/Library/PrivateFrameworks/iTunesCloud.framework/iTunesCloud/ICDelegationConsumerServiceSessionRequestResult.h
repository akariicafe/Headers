@class NSError, ICDelegateToken, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject

@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken;
@property (readonly, copy, nonatomic) NSError *resultError;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;

- (void).cxx_destruct;
- (id)initWithDelegateToken:(id)a0 storefrontIdentifier:(id)a1 resultError:(id)a2;

@end
