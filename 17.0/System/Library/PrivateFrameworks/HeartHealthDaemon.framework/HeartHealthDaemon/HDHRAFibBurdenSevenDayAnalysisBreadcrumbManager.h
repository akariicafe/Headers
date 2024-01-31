@class HDKeyValueDomain, NSObject;
@protocol OS_dispatch_queue;

@interface HDHRAFibBurdenSevenDayAnalysisBreadcrumbManager : NSObject <HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> {
    HDKeyValueDomain *_keyValueDomain;
    id /* block */ _dateGenerator;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)dropBreadcrumb:(long long)a0;
- (id)_dateKeyForBreadcrumb:(long long)a0;
- (void)_queue_dropAnalysisResultBreadcrumbWithContext:(id)a0 date:(id)a1;
- (void)_queue_dropBreadcrumb:(long long)a0 date:(id)a1;
- (void)dropAnalysisResultBreadcrumbWithContext:(id)a0;
- (id)fetchBreadcrumbsWithError:(id *)a0;
- (id)initWithKeyValueDomain:(id)a0 dateGenerator:(id /* block */)a1 queue:(id)a2;

@end
