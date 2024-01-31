@interface NSConcreteOrderedSetChange : NSOrderedSetChange {
    unsigned long long _changeType;
    unsigned long long _sourceIndex;
    unsigned long long _destinationIndex;
    id _value;
}

- (void)dealloc;
- (unsigned long long)changeType;
- (id)value;
- (unsigned long long)destinationIndex;
- (id)initWithType:(unsigned long long)a0 sourceIndex:(unsigned long long)a1 destinationIndex:(unsigned long long)a2 value:(id)a3;
- (unsigned long long)sourceIndex;

@end
