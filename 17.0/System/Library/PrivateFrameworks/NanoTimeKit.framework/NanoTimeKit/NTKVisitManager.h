@interface NTKVisitManager : NSObject

+ (id)fallbackVisit;
+ (id)sharedVisitManager;

- (id)anyVisit;
- (id)currentVisit;
- (id)previousVisit;
- (id)startVisitUpdatesWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)stopVisitUpdatesForToken:(id)a0;

@end
