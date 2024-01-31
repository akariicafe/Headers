@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding>

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long *persistentIDs;
@property (readonly, nonatomic) BOOL shouldContain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:(const long long *)a0 count:(unsigned long long)a1 shouldContain:(BOOL)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ML3PredicateForEntityClass:(Class)a0;

@end
