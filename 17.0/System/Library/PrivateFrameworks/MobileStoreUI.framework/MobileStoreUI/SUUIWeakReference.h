@class NSObject;

@interface SUUIWeakReference : NSObject

@property (weak, nonatomic) NSObject *object;

- (void).cxx_destruct;

@end
