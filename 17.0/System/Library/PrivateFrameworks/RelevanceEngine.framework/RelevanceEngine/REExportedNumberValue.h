@class NSNumber;

@interface REExportedNumberValue : REExportedValue {
    NSNumber *_number;
}

- (id)numberValue;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithNumber:(id)a0;

@end
