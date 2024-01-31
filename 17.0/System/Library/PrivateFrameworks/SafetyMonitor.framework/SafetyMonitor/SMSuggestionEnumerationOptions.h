@class NSArray, NSDateInterval;

@interface SMSuggestionEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) BOOL includeSuppressed;
@property (readonly, nonatomic) BOOL sortByCreationDate;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *filteredToSuggestionTriggers;
@property (readonly, nonatomic) NSArray *filteredToSuggestionUserTypes;
@property (readonly, nonatomic) NSArray *filteredToSessionTypes;
@property (readonly, nonatomic) NSArray *filteredToSuggestionSessionTypes;

+ (id)getEnumerationOptionsForLatestSuggestionSortedByCreationDateIncludeSuppressed:(BOOL)a0 filteredToSuggestionTriggers:(id)a1 filteredToSuggestionUserTypes:(id)a2 filteredToSessionTypes:(id)a3;

- (unsigned long long)batchSize;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (Class)enumeratedType;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 offset:(unsigned long long)a2 includeSuppressed:(BOOL)a3 sortByCreationDate:(BOOL)a4 ascending:(BOOL)a5 dateInterval:(id)a6 filteredToSuggestionTriggers:(id)a7 filteredToSuggestionUserTypes:(id)a8 filteredToSessionTypes:(id)a9;
- (id)initWithIncludeSuppressed:(BOOL)a0 sortByCreationDate:(BOOL)a1 ascending:(BOOL)a2 dateInterval:(id)a3 filteredToSuggestionTriggers:(id)a4 filteredToSuggestionUserTypes:(id)a5 filteredToSessionTypes:(id)a6;

@end
