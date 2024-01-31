@interface ICPasswordReaskController : NSObject

+ (id)sharedController;

- (void)enrollInReaskForAccount:(id)a0;
- (BOOL)isEnrolledInReaskForAccount:(id)a0;
- (id)keyForEnrolledInReask:(id)a0;
- (id)keyForLastReaskDate:(id)a0;
- (id)lastReaskDateForAccount:(id)a0;
- (void)reaskPasswordForAccount:(id)a0;
- (void)reaskPasswordForAccountIfNecessary:(id)a0;
- (void)setIsEnrolledInReask:(BOOL)a0 forAccount:(id)a1;
- (void)setLastReaskDate:(id)a0 forAccount:(id)a1;
- (BOOL)shouldReaskForAccount:(id)a0;

@end
