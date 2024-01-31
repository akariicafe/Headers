@class NSString;

@interface REExportedStringValue : REExportedValue {
    NSString *_string;
}

- (id)stringValue;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (unsigned long long)type;

@end
