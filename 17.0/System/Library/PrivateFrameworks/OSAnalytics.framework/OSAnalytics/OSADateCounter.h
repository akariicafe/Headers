@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)increment;
- (void)resetCount;

@end
