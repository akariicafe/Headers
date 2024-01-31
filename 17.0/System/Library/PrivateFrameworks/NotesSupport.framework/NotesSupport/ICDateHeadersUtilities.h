@class NSString;

@interface ICDateHeadersUtilities : NSObject

@property (class, nonatomic) int defaultDateHeadersType;
@property (class, nonatomic) int queryDateHeadersType;
@property (class, readonly, nonatomic) BOOL supportsQueryDateHeaders;
@property (class, readonly, nonatomic) BOOL showsQueryDateHeaders;
@property (class, readonly, nonatomic) NSString *menuTitle;

+ (void)clearCache;
+ (id)actionItemTitleWithDateHeadersType:(int)a0;
+ (BOOL)isShowingQueryDateHeadersForDateHeadersType:(int)a0;
+ (void)setDateHeadersUserPreference:(int)a0 forKey:(id)a1 postNotificationName:(id)a2;
+ (id)stringForDateHeadersType:(int)a0;

@end
