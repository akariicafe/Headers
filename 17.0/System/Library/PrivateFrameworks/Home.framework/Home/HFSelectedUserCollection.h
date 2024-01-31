@class NSSet, NAIdentity, NSString;

@interface HFSelectedUserCollection : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSSet *specificUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allUsersCollection;
+ (id)collectionWithResolvedUsers:(id)a0 inHome:(id)a1;
+ (id)currentUserCollection;
+ (id)collectionWithSpecificUsers:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)resolveSelectedUsersWithHome:(id)a0;
- (id)initWithType:(unsigned long long)a0 specificUsers:(id)a1;

@end
