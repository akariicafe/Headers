@class SUIdleTracker;

@interface SUCurrentProcess : NSObject {
    void /* unknown type, empty encoding */ mock;
    void /* unknown type, empty encoding */ _idleTracker;
}

@property (class, nonatomic, readonly) SUCurrentProcess *default;

@property (nonatomic, retain) SUIdleTracker *idleTracker;

- (id)init;
- (void).cxx_destruct;

@end
