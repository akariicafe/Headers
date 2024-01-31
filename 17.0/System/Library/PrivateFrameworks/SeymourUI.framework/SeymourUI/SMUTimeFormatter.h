@class AVTimeFormatter;

@interface SMUTimeFormatter : NSFormatter {
    AVTimeFormatter *_formatter;
}

@property (nonatomic) double formatTemplate;
@property (nonatomic, getter=isFullWidth) BOOL fullWidth;
@property (nonatomic) long long style;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (id)stringFromSeconds:(double)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)editingStringForObjectValue:(id)a0;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;

@end
