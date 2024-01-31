@class NSSet, HDDatabaseTransactionContextStatistics, NSMutableSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
}

@property (readonly, nonatomic) BOOL skipJournalMerge;
@property (readonly, nonatomic) BOOL skipTransactionStartTasks;
@property (readonly, nonatomic) BOOL requiresNewDatabaseConnection;
@property (readonly, nonatomic) BOOL allowsJournalingDuringProtectedRead;
@property (readonly, copy, nonatomic) NSSet *accessibilityAssertions;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) long long journalType;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) BOOL requiresWrite;
@property (readonly, nonatomic) BOOL requiresProtectedData;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForReadingProtectedData;
+ (id)contextForAccessibilityAssertion:(id)a0;
+ (id)contextForReading;
+ (id)contextForWritingProtectedData;
+ (id)highPriorityContext;
+ (id)contextForWriting;

- (id)_initWithOptions:(unsigned long long)a0;
- (id)copyForWritingProtectedData;
- (id)copyForReadingProtectedData;
- (BOOL)containsContext:(id)a0 error:(id *)a1;
- (id)init;
- (unsigned long long)hash;
- (id)mergedContextWithContext:(id)a0 error:(id *)a1;
- (id)copyForWriting;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
