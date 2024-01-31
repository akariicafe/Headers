@class NSNumber, NSString, NSDictionary;

@interface AALoginDelegatesResponse : AAResponse

@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;
@property (readonly, nonatomic) NSDictionary *responseParameters;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *altDSID;

- (id)augmentedResponseParametersForServiceIdentifier:(id)a0 withAppleID:(id)a1 password:(id)a2 DSID:(id)a3 altDSID:(id)a4;
- (id)responseParametersForServiceIdentifier:(id)a0;

@end
