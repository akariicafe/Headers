@class COIDSMessage, NSString;

@interface COOnDemandIDSNodeCreationRequest : COUnhandledRequest

@property (readonly, nonatomic) COIDSMessage *message;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) NSString *fromURIToken;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSString *responseIdentifier;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 idsIdentifier:(id)a1 uriToken:(id)a2 requestIdentifier:(id)a3 responseIdentifier:(id)a4;

@end
