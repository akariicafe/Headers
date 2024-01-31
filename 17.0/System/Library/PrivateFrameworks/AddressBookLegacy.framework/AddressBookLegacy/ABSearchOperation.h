@class NSPredicate, NSArray, NSThread;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation {
    void *_addressBook;
    void *_internalSearchAddressBook;
    NSThread *_progressBlockThread;
}

@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) void *internalSearchAddressBook;
@property (nonatomic) void *addressBook;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *prefetchProperties;
@property (nonatomic) id<ABSearchOperationDelegate> delegate;
@property (nonatomic) void *context;
@property (nonatomic) unsigned int sortOrdering;

+ (id)personPredicateWithNameLike:(id)a0 inGroups:(id)a1 sources:(id)a2 addressBook:(void *)a3;
+ (id)personPredicateWithNameLike:(id)a0 inSource:(void *)a1 addressBook:(void *)a2;
+ (id)personPredicateWithValue:(id)a0 comparison:(long long)a1 forProperty:(int)a2 addressBook:(void *)a3;
+ (id)personPredicateWithAnyValueForProperty:(int)a0 addressBook:(void *)a1;
+ (id)personPredicateWithGroup:(void *)a0 addressBook:(void *)a1;
+ (id)personPredicateWithName:(id)a0 addressBook:(void *)a1;
+ (id)personPredicateWithNameLike:(id)a0 addressBook:(void *)a1;
+ (id)personPredicateWithNameLike:(id)a0 inAccount:(id)a1 addressBook:(void *)a2;
+ (id)personPredicateWithNameLike:(id)a0 inGroup:(void *)a1 addressBook:(void *)a2;
+ (id)personPredicateWithNameLike:(id)a0 inSource:(void *)a1 includeSourceInResults:(BOOL)a2 addressBook:(void *)a3;
+ (id)personPredicateWithNameLike:(id)a0 inSource:(void *)a1 includeSourceInResults:(BOOL)a2 includePhotosInResults:(BOOL)a3 addressBook:(void *)a4;
+ (id)personPredicateWithNameOnly:(id)a0 inAccount:(id)a1 addressBook:(void *)a2;
+ (id)personPredicateWithPhoneLike:(id)a0 countryHint:(id)a1 addressBook:(void *)a2;

- (void)dealloc;
- (void)main;
- (void)cancel;
- (BOOL)isConcurrent;
- (BOOL)predicateShouldContinue:(id)a0;
- (BOOL)predicateShouldContinue:(id)a0 afterFindingRecord:(void *)a1;
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)a0;

@end
