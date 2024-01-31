@class NSArray;

@interface TSTimeConverter : NSObject {
    NSArray *_taiutc;
}

- (id)init;
- (id)initWithContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithTAIUTCArray:(id)a0;
- (double)leapSecondForTAIDate:(id)a0;
- (double)leapSecondForUTCDate:(id)a0;
- (id)taiDateFromUTCDate:(id)a0;
- (id)utcDateFromTAIDate:(id)a0;

@end
