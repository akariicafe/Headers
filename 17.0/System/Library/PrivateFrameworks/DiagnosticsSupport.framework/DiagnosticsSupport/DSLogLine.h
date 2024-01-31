@class NSString, NSArray, NSDate;

@interface DSLogLine : NSObject

@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL isUsable;
@property (readonly, nonatomic) NSString *exception;
@property (readonly, nonatomic) NSArray *fields;
@property (readonly, nonatomic) NSString *bundleID;

+ (id)logLinesFromArray:(id)a0;

- (void).cxx_destruct;
- (id)initWithLine:(id)a0;
- (id)blankingStringFromFieldAtIndex:(int)a0;
- (BOOL)boolFromFieldAtIndex:(int)a0;
- (double)doubleFromFieldAtIndex:(int)a0;
- (id)initWithLogLine:(id)a0;
- (int)integerFromFieldAtIndex:(int)a0;
- (long long)longLongFromFieldAtIndex:(int)a0;
- (id)nilableStringFromFieldAtIndex:(int)a0;

@end
