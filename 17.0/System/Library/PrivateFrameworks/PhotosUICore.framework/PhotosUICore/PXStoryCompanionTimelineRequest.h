@interface PXStoryCompanionTimelineRequest : NSObject

+ (id)_createCompanionTimelineFromModel:(id)a0;
+ (BOOL)_transformConfiguration:(id)a0 intoStoryConfiguration:(out id *)a1 extendedTraitCollection:(out id *)a2 error:(out id *)a3;
+ (void)_waitForFinalTimelineWithProgress:(id)a0 model:(id)a1 resultHandler:(id /* block */)a2;
+ (id)requestTimelineWithConfiguration:(id)a0 resultHandler:(id /* block */)a1;

- (id)init;

@end
