@class NSString;

@interface TMTimeZone : NSObject

@property (copy) NSString *source;
@property (copy) NSString *olsonName;

+ (id)timeZoneWithOlsonName:(id)a0 fromSource:(id)a1;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)initWithOlsonName:(id)a0 fromSource:(id)a1;
- (BOOL)hasSameOlsonNameAs:(id)a0;

@end
