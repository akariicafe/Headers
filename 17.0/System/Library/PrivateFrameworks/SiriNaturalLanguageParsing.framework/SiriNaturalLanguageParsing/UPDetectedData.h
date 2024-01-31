@class NSString;

@interface UPDetectedData : NSObject

@property (readonly, copy) NSString *label;
@property (readonly) struct __CFArray { } *dataDetectorResult;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 dataDetectorResult:(struct __CFArray { } *)a1;

@end
