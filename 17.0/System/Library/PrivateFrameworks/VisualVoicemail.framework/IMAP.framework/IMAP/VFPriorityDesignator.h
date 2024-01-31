@interface VFPriorityDesignator : NSObject

@property (class, readonly, retain) VFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorStack;
+ (id)installNewDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorIfExists;
+ (id)pushNewDesignator;
+ (void)destroyCurrentDesignator;

@end
