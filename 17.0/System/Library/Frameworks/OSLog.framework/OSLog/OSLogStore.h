@class OSLogEventSource;

@interface OSLogStore : NSObject {
    OSLogEventSource *_source;
    int _constraint;
}

+ (id)storeWithScope:(long long)a0 error:(id *)a1;
+ (id)storeWithURL:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)entriesEnumeratorWithOptions:(unsigned long long)a0 position:(id)a1 predicate:(id)a2 error:(id *)a3;
- (id)_constrainedEntriesEnumeratorWithOptions:(unsigned long long)a0 position:(id)a1 predicate:(id)a2 error:(id *)a3;
- (id)entriesEnumeratorAndReturnError:(id *)a0;
- (id)initForFactory;
- (id)positionWithDate:(id)a0;
- (id)positionWithTimeIntervalSinceEnd:(double)a0;
- (id)positionWithTimeIntervalSinceLatestBoot:(double)a0;

@end
