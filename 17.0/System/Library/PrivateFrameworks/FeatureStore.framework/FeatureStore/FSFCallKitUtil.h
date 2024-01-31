@class CXCallObserver;

@interface FSFCallKitUtil : NSObject

@property (readonly, nonatomic) CXCallObserver *callCenter;

+ (id)sharedInstance;

- (BOOL)isOnCall;
- (id)init;
- (void).cxx_destruct;

@end
