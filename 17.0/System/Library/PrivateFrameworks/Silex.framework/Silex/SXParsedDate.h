@class NSTimeZone, NSString, NSDate;

@interface SXParsedDate : NSObject <SXParsedDate>

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL containedTime;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 containedTime:(BOOL)a1 timeZone:(id)a2;

@end
