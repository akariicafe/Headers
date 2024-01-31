@class NSString;
@protocol CRKClassKitRosterRequirements;

@interface CRKRemoveASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID;
@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)removeClass:(id)a0;
- (id)classWithObjectID:(id)a0 inClasses:(id)a1;
- (void)didFetchClasses:(id)a0 error:(id)a1;
- (void)fetchClasses;
- (id)initWithObjectID:(id)a0 requirements:(id)a1;

@end
