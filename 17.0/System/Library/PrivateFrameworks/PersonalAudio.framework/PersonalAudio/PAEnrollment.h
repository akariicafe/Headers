@class PAConfiguration, NSMutableDictionary;

@interface PAEnrollment : NSObject

@property (retain, nonatomic) PAConfiguration *audiogramPreset;
@property (retain, nonatomic) NSMutableDictionary *enrollmentHandlers;
@property (nonatomic) unsigned long long selectedLevel;
@property (nonatomic) unsigned long long progress;

+ (id)enrollmentWithAudiogram:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addEnrollmentStepForSection:(unsigned long long)a0 comparing:(unsigned long long)a1 withOption:(unsigned long long)a2 andBlock:(id /* block */)a3;
- (void)addHandlers;
- (void)addLevelEnrollmentStepsStartingWith:(unsigned long long)a0;
- (void)addOffEnrollmentStepComparing:(unsigned long long)a0;
- (id)enrollmentNodeAfter:(id)a0 withSelectedNode:(id)a1;

@end
