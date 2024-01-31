@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorStack;
+ (id)installNewDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorIfExists;
+ (id)pushNewDesignator;
+ (void)destroyCurrentDesignator;

@end
