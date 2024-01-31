@class NSArray;

@interface _HDUserDomainConceptManagerModificationOperation : HDJournalableOperation

@property (readonly, nonatomic) long long method;
@property (readonly, nonatomic) long long syncProvenance;
@property (readonly, nonatomic) struct { int minimum; int current; } syncVersion;
@property (readonly, nonatomic) long long syncIdentity;
@property (readonly, nonatomic) NSArray *userDomainConcepts;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithUserDomainConcepts:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncIdentity:(long long)a3 syncVersion:(struct { int x0; int x1; })a4;

@end
