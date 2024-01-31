@class NSArray, NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject {
    NSPointerArray *_array;
    BOOL _dirty;
}

@property (readonly, nonatomic) NSArray *strongArray;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)addWeakObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;

@end
