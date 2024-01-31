@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {
    struct __CFArray { } *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont { } *_font;
}

+ (id)textRunResponseByMergingResponses:(id)a0;
+ (id)textRunResponseWithFont:(struct __CTFont { } *)a0;

- (void)dealloc;
- (struct __CTFont { } *)font;
- (void).cxx_destruct;
- (id)widths;
- (struct __CFArray { } *)ctLines;

@end
