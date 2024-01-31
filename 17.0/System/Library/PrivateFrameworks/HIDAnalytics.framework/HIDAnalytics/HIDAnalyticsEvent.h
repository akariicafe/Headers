@class NSString, NSDictionary, NSMutableDictionary;

@interface HIDAnalyticsEvent : NSObject {
    NSMutableDictionary *_fields;
    BOOL _isUpdated;
}

@property (retain) NSString *name;
@property (retain) NSDictionary *desc;
@property BOOL isLogged;

- (id)initWithAttributes:(id)a0 description:(id)a1;
- (void)setStringValue:(id)a0;
- (void)setIntegerValue:(unsigned long long)a0 forField:(id)a1;
- (void)activate;
- (void)addHistogramFieldWithSegments:(id)a0 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a1 count:(long long)a2;
- (void)addField:(id)a0;
- (id)description;
- (void)setIntegerValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)value;
- (void)setStringValue:(id)a0 forField:(id)a1;
- (void)setValue:(id)a0;

@end
