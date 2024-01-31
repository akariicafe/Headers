@class NSObject;
@protocol OS_dispatch_group;

@interface SADispatchGroup : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property int entries;

+ (id)new;

- (int)wait:(unsigned long long)a0;
- (id)init;
- (void)leave;
- (void).cxx_destruct;
- (void)enter;

@end
