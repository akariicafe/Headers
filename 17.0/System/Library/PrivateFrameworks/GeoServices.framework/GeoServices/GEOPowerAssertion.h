@class NSString;

@interface GEOPowerAssertion : NSObject {
    NSString *_identifier;
    double _timeout;
    unsigned int _assertion;
    long long _type;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 identifier:(id)a1 timeout:(double)a2;

@end
