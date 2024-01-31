@class NSSet, NSMutableSet;
@protocol ATXInformationHeuristicRefreshTriggerDelegate;

@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding> {
    NSMutableSet *_registeredHeuristics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *registeredHeuristics;
@property (weak, nonatomic) id<ATXInformationHeuristicRefreshTriggerDelegate> delegate;

- (void)_start;
- (id)init;
- (void)dealloc;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_safeDecodeObjectOfClasses:(id)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (void)stopTriggeringRefreshForHeuristicIfAlready:(id)a0;
- (void).cxx_destruct;
- (void)_stop;
- (void)stopTriggeringRefreshForAllHeuristics;
- (void)startTriggeringRefreshForHeuristicIfNotAlready:(id)a0;
- (id)initWithCoder:(id)a0;

@end
