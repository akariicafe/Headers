@class NSDictionary;

@interface UPSharedEntityResolution : NSObject

@property (readonly, nonatomic) NSDictionary *_dataDetectorDateTimeSpansByTokenRange;

+ (id)buildDataDetectorDateTimeSpansByTokenRange:(id)a0;

- (void).cxx_destruct;
- (id)initWithMatchingSpans:(id)a0;
- (id)resolveSharedEntityForTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 valueType:(id)a1;

@end
