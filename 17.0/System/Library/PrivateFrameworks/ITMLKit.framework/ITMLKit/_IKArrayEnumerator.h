@class IKArray;

@interface _IKArrayEnumerator : NSEnumerator {
    IKArray *_array;
    long long _currentIndex;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;

@end
