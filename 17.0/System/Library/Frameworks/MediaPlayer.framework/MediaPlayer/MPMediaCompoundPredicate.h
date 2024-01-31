@class NSArray, NSString;

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding>

@property (readonly, copy, nonatomic) NSArray *predicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)a0;

- (id)initWithPredicates:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (id)ML3PredicateForTrack;
- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)a0;

@end
