@class NSString, NSURL, NSArray, COCondition, NSMutableDictionary, COConditionBundle, NSObject, COStatusBar;
@protocol OS_dispatch_queue;

@interface COConditionSession : NSObject

@property (retain, nonatomic) COCondition *condition;
@property (retain, nonatomic) COConditionBundle *bundle;
@property (retain, nonatomic) NSMutableDictionary *classDict;
@property (retain, nonatomic) NSString *warning;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) COStatusBar *statusBar;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setUpQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tearDownQueue;
@property (copy, nonatomic) id /* block */ statusBarPopupFinishedTeardownCallback;
@property (copy, nonatomic) id /* block */ notifyTeardownBeganCallback;
@property (readonly, copy, nonatomic) NSString *selectedCondition;
@property (readonly, copy, nonatomic) NSString *selectedProfile;
@property (readonly, nonatomic) NSArray *additionalArguments;

+ (id)getBootSessionUUID;
+ (id)getActiveConditions;
+ (id)_loadExternalConditionBundleInfo:(id)a0 supportedConditionData:(id)a1 error:(id *)a2;
+ (id)bundleToDict:(id)a0;
+ (BOOL)conditionIsBundledWithFramework:(id)a0;
+ (id)conditionsBundledWithFramework;
+ (id)findBundleURLForConditionClass:(id)a0 andError:(id *)a1;
+ (id)getBundleURLsAtPath:(id)a0;
+ (id)listAvailableConditions;
+ (id)loadConditionCacheWithError:(id *)a0;
+ (id)loadInformationDict;
+ (void)logSignpostWithConditionStates;
+ (id)prepareInfoDictForBuiltInCondition:(id)a0 error:(id *)a1;
+ (id)removeStaleConditions:(id)a0;
+ (BOOL)tearDownAllConditionsWithErrors:(id *)a0;
+ (BOOL)updateConditionCache:(BOOL)a0 forCondition:(id)a1 additionalArguments:(id)a2 conditionBundle:(id)a3 error:(id *)a4;
+ (BOOL)writeConditionCache:(id)a0 toFileDescriptor:(int)a1 error:(id *)a2;

- (void)dealloc;
- (id)className;
- (BOOL)setUpWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)loadProfileForBundle:(id)a0 withError:(id *)a1;
- (BOOL)_setupBundleAtPath:(id)a0 withError:(id *)a1;
- (id)copyLoadedConditionClassName;
- (BOOL)createStatusBar:(id)a0 conditionClassDescription:(id)a1 withProfileDescription:(id)a2 error:(id *)a3;
- (void)freeStatusBar;
- (BOOL)hasActiveCondition;
- (id)initWithConditionIdentifier:(id)a0 profile:(id)a1;
- (id)initWithConditionIdentifier:(id)a0 profile:(id)a1 additionalArgs:(id)a2;
- (BOOL)loadBundleWithPath:(id)a0 andError:(id *)a1;
- (BOOL)startConditionWithCallback:(id /* block */)a0;
- (BOOL)startConditionWithCallback:(id /* block */)a0 andStatusBarNotificationCallback:(id /* block */)a1;
- (BOOL)startConditionWithCallback:(id /* block */)a0 teardownStartedCallback:(id /* block */)a1 teardownFinishedCallback:(id /* block */)a2;
- (BOOL)stopConditionWithCallback:(id /* block */)a0;
- (BOOL)tearDownWithError:(id *)a0;
- (id)userFriendlyNameForSelectedCondition;
- (id)userFriendlyNameForSelectedProfile;

@end
