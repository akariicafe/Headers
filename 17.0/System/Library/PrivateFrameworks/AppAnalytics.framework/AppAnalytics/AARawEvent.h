@interface AARawEvent : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ sessionGroup;
    void /* unknown type, empty encoding */ timestampGranularity;
    void /* unknown type, empty encoding */ properties;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 properties:(id)a1;
- (id)initWithName:(id)a0 sessionGroup:(id)a1 timestampGranularity:(long long)a2 properties:(id)a3;

@end
