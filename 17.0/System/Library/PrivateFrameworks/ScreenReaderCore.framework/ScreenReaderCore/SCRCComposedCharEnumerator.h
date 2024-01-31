@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {
    BOOL _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (id)nextObject;
- (id)allObjects;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
