@class NSString;

@interface CKDPCSIdentityWrapper : NSObject

@property (readonly, nonatomic) struct _PCSIdentitySetData { } *identitySet;
@property (readonly, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) NSString *identityString;

- (void)dealloc;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { } *)a0 withPrimaryServiceName:(id)a1;
- (void).cxx_destruct;

@end
