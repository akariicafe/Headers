@class NSString, CMNumberFormatter;

@interface WMListLevelTextToken : NSObject {
    CMNumberFormatter *_formatter;
}

@property (readonly) NSString *string;
@property (readonly) int level;

+ (id)tokenWithString:(id)a0 level:(int)a1 formatter:(id)a2;

- (id)stringForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 level:(int)a1 formatter:(id)a2;

@end
