@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (id)initWithLevel:(id)a0;
- (id)stringValue;
- (id)init;
- (BOOL)booleanValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)directoryValue;
- (float)floatValue;
- (id)fileValue;
- (long long)longValue;
- (int)intValue;
- (id)description;
- (void).cxx_destruct;
- (double)doubleValue;
- (id)binaryValue;

@end
