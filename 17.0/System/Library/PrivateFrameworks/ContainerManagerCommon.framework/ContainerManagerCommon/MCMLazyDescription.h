@class NSString;

@interface MCMLazyDescription : NSString {
    id /* block */ _block;
    NSString *_value;
}

- (id)redactedDescription;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithDescriber:(id /* block */)a0;

@end
