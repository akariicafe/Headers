@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)reset;
+ (BOOL)birthdayCalendarEnabled;
+ (id)sharedListener;
+ (void)start;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;

- (id)init;
- (void)reset;
- (BOOL)birthdayCalendarEnabled;
- (void)start;
- (void).cxx_destruct;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;

@end
