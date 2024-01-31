@class NSString;

@interface Coherence.ObjCRLE : NSObject {
    void /* unknown type, empty encoding */ rle;
}

@property (nonatomic, readonly) long long rangeCount;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateRangesIn:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 :(id /* block */)a1;
- (long long)rangeCountIn:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
