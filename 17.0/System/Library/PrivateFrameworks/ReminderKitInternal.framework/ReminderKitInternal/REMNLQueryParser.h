@class NSDate, NSTimeZone, NSLocale;

@interface REMNLQueryParser : NSObject {
    BOOL _forTesting;
    NSTimeZone *_timeZone;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSDate *referenceDate;

- (void).cxx_destruct;
- (id)parseString:(id)a0;
- (id)initWithLocale:(id)a0 referenceDate:(id)a1 referenceTimeZone:(id)a2 forTesting:(BOOL)a3;
- (id)parserManagerTestOptions;

@end
