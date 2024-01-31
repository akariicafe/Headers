@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (id)owner;
- (id)initWithText:(id)a0;
- (void)setOwner:(id)a0;
- (void)setDate:(id)a0;
- (id)date;
- (void).cxx_destruct;
- (id)text;

@end
