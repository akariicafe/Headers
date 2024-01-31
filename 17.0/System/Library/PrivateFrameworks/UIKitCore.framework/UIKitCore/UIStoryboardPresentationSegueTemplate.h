@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) BOOL useDefaultModalPresentationStyle;
@property (nonatomic) BOOL useDefaultModalTransitionStyle;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)a0;

@end
