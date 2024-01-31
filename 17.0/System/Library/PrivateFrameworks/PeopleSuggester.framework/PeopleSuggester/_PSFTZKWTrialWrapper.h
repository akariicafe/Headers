@class _PASLock, TRIClient;

@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}

@property (readonly, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;
+ (void)runWithData:(id /* block */)a0;
+ (void)runIfUpdated:(id /* block */)a0;

- (id)init;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;
- (void)refresh;
- (void)flagAsSame;
- (void)flagAsUpdated;
- (void)runWithData:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (void)runIfUpdated:(id /* block */)a0;
- (void)loadFactors;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;

@end
