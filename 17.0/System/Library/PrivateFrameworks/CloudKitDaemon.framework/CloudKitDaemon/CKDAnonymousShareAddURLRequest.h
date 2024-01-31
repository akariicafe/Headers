@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToAdd:(id)a1;

@end
