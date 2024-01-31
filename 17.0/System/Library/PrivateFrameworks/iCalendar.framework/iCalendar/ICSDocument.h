@class ICSCalendar;

@interface ICSDocument : NSObject {
    ICSCalendar *_calendar;
}

+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)a0;
+ (void)suppressParserSyntaxErrorLogging;

- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)calendar;
- (BOOL)validate:(id *)a0;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;
- (id)initWithICSString:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)ICSDataWithOptions:(unsigned long long)a0;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)ICSChecksumForVersion:(int)a0;
- (id)ICSChecksumStringForVersion:(int)a0;
- (id)ICSCompressedDataWithOptions:(unsigned long long)a0;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 options:(unsigned long long)a2 delegate:(id)a3 error:(id *)a4;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)validateParsedCalendar:(id)a0;

@end
