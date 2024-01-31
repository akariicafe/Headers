@class NSMutableArray;

@interface HUComfortSoundsShuffler : NSObject {
    unsigned long long _index;
    NSMutableArray *_array;
}

+ (id)shufflerWithArray:(id)a0;

- (id)nextObject;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithArray:(id)a0;
- (void)shuffle;

@end
