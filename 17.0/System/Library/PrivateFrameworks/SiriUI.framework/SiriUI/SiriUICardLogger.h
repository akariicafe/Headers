@class NSDateFormatter;

@interface SiriUICardLogger : NSObject {
    NSDateFormatter *_dateFormatter;
}

+ (id)_sharedInstance;
+ (id)logCard:(id)a0 format:(unsigned long long)a1;
+ (id)logCard:(id)a0;
+ (id)logCardData:(id)a0;
+ (id)logCardData:(id)a0 format:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_dateFormatter;
- (id)_nowString;
- (id)_currentFilenameForFormat:(unsigned long long)a0;

@end
