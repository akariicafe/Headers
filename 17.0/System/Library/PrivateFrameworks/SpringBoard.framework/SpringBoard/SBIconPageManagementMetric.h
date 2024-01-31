@class NSString, PETDistributionEventTracker, PETScalarEventTracker;

@interface SBIconPageManagementMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETDistributionEventTracker *_pagesHiddenTracker;
    PETDistributionEventTracker *_pagesVisibleTracker;
    PETDistributionEventTracker *_pagesCountTracker;
    PETScalarEventTracker *_pageManagementPresentationTracker;
    PETScalarEventTracker *_pageDeletionTracker;
    PETScalarEventTracker *_pageMovementTracker;
    PETScalarEventTracker *_pageHidingTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
