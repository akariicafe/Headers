@class NSString, NSMutableString;

@interface ECMessageBodyStringAccumulator : NSObject <ECMessageBodyStringAccumulator> {
    NSMutableString *_accumulatedString;
    unsigned long long _remainingLength;
    unsigned long long _options;
    unsigned long long _lastEntity;
    unsigned long long _beforeLastEntity;
    unsigned long long _lastCustomEntityTag;
    BOOL _isFull;
}

@property (readonly, nonatomic) BOOL isFull;
@property (readonly, nonatomic) NSString *accumulatedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendString:(id)a0;
- (void).cxx_destruct;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (void)appendNewline;
- (void)appendCustomEntityWithTag:(unsigned long long)a0 stringRepresentation:(id)a1;
- (void)appendInnerTextWithConsumableNode:(id)a0;
- (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1;
- (id)initWithOptions:(unsigned long long)a0 lengthLimit:(unsigned long long)a1;

@end
