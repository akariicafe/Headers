@class UNUserNotificationCenter, NSString, NSArray, NSDictionary, NSMutableDictionary, NSObject, NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUUserNotificationSession : NSObject <UNUserNotificationCenterDelegate> {
    NSMutableDictionary *_actions;
    BOOL _actionsChanged;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_requestIdentifier;
    int _state;
    NSError *_stepError;
    int _stepState;
    NSObject<OS_dispatch_source> *_timer;
    UNUserNotificationCenter *_unCenter;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) NSString *bodyKey;
@property (copy, nonatomic) NSArray *bodyArguments;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *iconAppIdentifier;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *iconPath;
@property (copy, nonatomic) NSString *iconSystemName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int interruptionLevel;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long soundAlertType;
@property (copy, nonatomic) NSString *subtitleKey;
@property (copy, nonatomic) NSArray *subtitleArguments;
@property (nonatomic) double timeoutSeconds;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSArray *titleArguments;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_run;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (void)_reportError:(id)a0;
- (void)_invalidate;
- (void)invalidate;
- (void)removeAllActions;
- (void)activate;
- (void).cxx_destruct;
- (void)_reportTimeout;
- (void)_runAuthorizeCheckStart;
- (void)_runAuthorizeRequestStart;
- (BOOL)_runInit:(id *)a0;
- (BOOL)_runRequestAddStart:(id *)a0;
- (BOOL)_runResponse:(id)a0 error:(id *)a1;
- (void)_updateActionCategories;
- (void)addActionWithIdentifier:(id)a0 title:(id)a1 flags:(unsigned int)a2 handler:(id /* block */)a3;
- (void)removeActionWithIdentifier:(id)a0;

@end
