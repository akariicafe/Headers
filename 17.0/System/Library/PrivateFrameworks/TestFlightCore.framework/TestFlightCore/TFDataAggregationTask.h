@class NSString, NSArray;

@interface TFDataAggregationTask : NSObject

@property (copy, nonatomic) id /* block */ loadDataBlock;
@property (copy, nonatomic) id /* block */ extractValuesBlock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (readonly, copy, nonatomic) NSArray *providedEntryIdentifiers;

+ (double)batteryLevel;
+ (id)deviceType;
+ (id)networkType;
+ (id)networkInfoTask;
+ (id)anytimeTasksForSession:(id)a0;
+ (id)cellularServiceInfo;
+ (id)deviceInfoTask;
+ (id)regionInfoTask;
+ (struct CGSize { double x0; double x1; })screenDimensions;
+ (id)sessionInfoTaskForIdentifier:(id)a0;
+ (id)snapshotTasksForSession:(id)a0;
+ (id)watchInfoTask;

- (id)description;
- (void).cxx_destruct;
- (void)extractDataPropertiesFromData:(id)a0 intoDataContainer:(id)a1;
- (id)initWithName:(id)a0 providedEntryIdentifiers:(id)a1;
- (void)loadDataOnQueue:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
