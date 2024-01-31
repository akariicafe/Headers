@class NSArray, NSDateInterval, NSPredicate, NSString, _DKEventStream;

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {
    _DKEventStream *_stream;
    NSDateInterval *_interval;
    NSString *_customIdentifier;
}

@property (nonatomic) BOOL includeLocalResults;
@property (nonatomic) BOOL includeRemoteResults;
@property (nonatomic) unsigned long long minimumOccurrencesForInclusion;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *valueKeyPaths;
@property (nonatomic) long long remoteHistogramLimit;
@property (readonly, nonatomic) _DKEventStream *stream;
@property (readonly, nonatomic) NSDateInterval *interval;
@property (copy, nonatomic) id /* block */ histogramHandler;

+ (id)histogramQueryForStream:(id)a0 interval:(id)a1 predicate:(id)a2 valueKeyPaths:(id)a3;
+ (BOOL)supportsSecureCoding;
+ (id)histogramQueryForPersistedHistogramsForStream:(id)a0 withCustomIdentifier:(id)a1;
+ (id)histogramQueryForStream:(id)a0 interval:(id)a1;
+ (id)histogramQueryForStream:(id)a0 interval:(id)a1 withPredicate:(id)a2;

- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (id)handleResults:(id)a0 error:(id)a1;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
