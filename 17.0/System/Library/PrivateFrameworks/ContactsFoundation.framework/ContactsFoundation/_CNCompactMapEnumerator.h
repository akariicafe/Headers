@class NSEnumerator;

@interface _CNCompactMapEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id /* block */ _transform;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0 transform:(id /* block */)a1;

@end
