@interface ATXContextHeuristicsScheduler : NSObject {
    void /* unknown type, empty encoding */ contextHeuristics;
    void /* unknown type, empty encoding */ debugRerunSportsNotificationToken;
    void /* unknown type, empty encoding */ favoritesChangedToken;
    void /* unknown type, empty encoding */ syncSportsChangedToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ repeatInterval;
}

- (id)init;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initWithContextHeuristics:(id)a0;

@end
