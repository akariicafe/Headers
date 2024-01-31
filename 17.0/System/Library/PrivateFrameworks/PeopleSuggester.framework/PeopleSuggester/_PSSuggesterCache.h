@class NSString, NSArray, NSObject, _PSSuggester;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PSSuggesterCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    _PSSuggester *_suggester;
    NSString *_cachedSessionID;
    NSArray *_cachedPeopleSuggestions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _leeway;
}

+ (id)defaultService;
+ (id)defaultServiceWithMaxSuggestionCount:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)refetch;
- (id)getCachedSuggestions;
- (id)initWithMaxSuggestionCount:(id)a0;

@end
