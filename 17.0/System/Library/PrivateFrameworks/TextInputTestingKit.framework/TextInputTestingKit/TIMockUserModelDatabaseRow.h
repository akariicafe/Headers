@class NSString, NSData, NSDate, NSNumber;

@interface TIMockUserModelDatabaseRow : NSObject

@property (retain) NSString *inputMode;
@property (retain) NSString *key;
@property (retain) NSNumber *value;
@property (retain) NSNumber *secondaryValue;
@property (retain) NSNumber *realValue;
@property (retain) NSData *properties;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *lastUpdateDate;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 inputMode:(id)a1 value:(id)a2 secondaryValue:(id)a3 realValue:(id)a4 properties:(id)a5 creationDate:(id)a6 lastUpdateDate:(id)a7;
- (BOOL)isMatchForKey:(id)a0 forInputMode:(id)a1 sinceDate:(id)a2;
- (BOOL)isMatchForKeyPrefix:(id)a0 forInputMode:(id)a1 sinceDate:(id)a2;
- (BOOL)isMatchForKeyPrefix:(id)a0 forInputMode:(id)a1 weeklyKeySuffixes:(id)a2 endDate:(id)a3;
- (BOOL)isMatchSinceDate:(id)a0;

@end
