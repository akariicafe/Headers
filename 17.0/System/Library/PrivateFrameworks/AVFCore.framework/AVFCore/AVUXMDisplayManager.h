@class AVDisplayCriteria;

@interface AVUXMDisplayManager : NSObject {
    AVDisplayCriteria *_preferredDisplayCriteria;
}

@property (class, readonly, nonatomic) AVUXMDisplayManager *sharedAVKitUXMDisplayManager;

@property (copy, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;

- (id)init;
- (void)reset;
- (void)dealloc;
- (id)initInternal;
- (void)_updateUXMWithDisplayCriteria:(id)a0;
- (void)_updateUXMWithDisplayCriteriaWithLock:(id)a0;
- (id)currentUXMDisplayCriteria;

@end
