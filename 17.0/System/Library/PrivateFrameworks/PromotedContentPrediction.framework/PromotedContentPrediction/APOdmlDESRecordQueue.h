@interface APOdmlDESRecordQueue : APOdmlSingleton

+ (id)sharedInstance;
+ (void)initialize;
+ (id)workQueue;

@end
