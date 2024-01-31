@class NSMutableDictionary, NSMutableSet, NSMutableOrderedSet;

@interface _UICollectionLayoutSupplementaryEnroller : NSObject {
    NSMutableOrderedSet *_enrollmentIdentifiers;
    NSMutableSet *_uncommittedEnrollmentIdentifiers;
    NSMutableDictionary *_enrollmentsDict;
    NSMutableDictionary *_kindEnrollmentsDict;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
