@class NSMutableArray;

@interface SizeContext : NSObject {
    NSMutableArray *_windowContextStack;
}

+ (id)sharedInstance;

- (id)init;
- (id)viewHierarchyForCurrentContext;
- (BOOL)hasViewHierarchyForCurrentContext;
- (void).cxx_destruct;
- (void)popContextFromViewHierarchy:(id)a0;
- (void)pushContextWithViewHierarchy:(id)a0;

@end
