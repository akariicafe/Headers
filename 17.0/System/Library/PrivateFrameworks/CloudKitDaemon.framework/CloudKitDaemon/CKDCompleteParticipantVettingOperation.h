@class NSString, NSData, CKShareMetadata;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKDCompleteParticipantVettingOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *vettingToken;
@property (readonly, nonatomic) NSString *vettingEmail;
@property (readonly, nonatomic) NSString *vettingPhone;
@property (readonly, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) NSData *encryptedKey;
@property (readonly, nonatomic) NSString *baseToken;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (retain, nonatomic) NSString *shortToken;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (retain, nonatomic) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ verifyProgressURLReconstructedBlock;
@property (copy, nonatomic) id /* block */ verifyProgressShareMetadataFetchedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (id)shortSharingTokenFromFullToken:(id)a0;
- (void)_forceFetchShareMetadata;
- (void)_performAuthKitVerification;
- (void)_reconstructShareURL;
- (void)_reconstructShortToken;
- (void)_verifyOONParticipant;
- (id)shortSharingTokenFromData:(id)a0;

@end
