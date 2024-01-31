@class NSTimeZone, NSCalendar, NSString, NSLocale;

@interface NSDateIntervalFormatter : NSFormatter {
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSTimeZone *_timeZone;
    NSString *_dateTemplate;
    NSString *_dateTemplateFromStyles;
    struct UDateIntervalFormat { } *_formatter;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    unsigned long long _boundaryStyle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _modified;
    BOOL _useTemplate;
}

@property (copy) NSLocale *locale;
@property (copy) NSCalendar *calendar;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSString *dateTemplate;
@property unsigned long long dateStyle;
@property unsigned long long timeStyle;

- (id)init;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringFromDate:(id)a0 toDate:(id)a1;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (unsigned long long)boundaryStyle;
- (id)editingStringForObjectValue:(id)a0;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (void)setBoundaryStyle:(unsigned long long)a0;
- (id)stringFromDateInterval:(id)a0;

@end
