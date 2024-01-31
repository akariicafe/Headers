@interface NSConcreteSetChange : NSSetChange {
    unsigned long long _changeType;
    id _value;
}

- (void)dealloc;
- (unsigned long long)changeType;
- (id)value;
- (id)initWithType:(unsigned long long)a0 object:(id)a1;

@end
