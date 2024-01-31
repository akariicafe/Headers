@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToRemove:(id)a1;

@end
