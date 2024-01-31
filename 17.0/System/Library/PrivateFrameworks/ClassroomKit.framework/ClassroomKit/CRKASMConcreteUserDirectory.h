@class NSString;
@protocol CRKClassKitRosterRequirements;

@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory>

@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;
@property (readonly, nonatomic) id /* block */ queryGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instructorDirectoryWithRosterRequirements:(id)a0 locationIDs:(id)a1;
+ (id)studentDirectoryWithRosterRequirements:(id)a0 locationIDs:(id)a1;

- (void).cxx_destruct;
- (id)initWithRosterRequirements:(id)a0 queryGenerator:(id /* block */)a1;
- (id)iteratorForSearchString:(id)a0 sortingGivenNameFirst:(BOOL)a1 pageSize:(long long)a2;

@end
