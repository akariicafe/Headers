@interface NSKeyValueMethodSetter : NSKeyValueSetter {
    struct objc_method { } *_method;
}

- (struct objc_method { } *)method;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 method:(struct objc_method { } *)a2;

@end
