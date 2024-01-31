@class NSArray, NSMutableArray;

@interface ABPKCircularArray : NSObject {
    NSMutableArray *_array;
    long long _capacity;
}

@property (readonly) NSArray *contents;

- (id)initWithCapacity:(long long)a0;
- (long long)count;
- (void).cxx_destruct;
- (void)add:(id)a0;

@end
