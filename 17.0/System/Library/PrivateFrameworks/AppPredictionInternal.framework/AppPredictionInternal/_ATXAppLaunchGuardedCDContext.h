@class NSMutableSet;
@protocol _CDLocalContext;

@interface _ATXAppLaunchGuardedCDContext : NSObject {
    id<_CDLocalContext> _context;
    NSMutableSet *_registrations;
}

- (void).cxx_destruct;

@end
