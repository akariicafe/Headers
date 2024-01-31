@class NSString;

@interface HMIVideoAnalyzerResultFilter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)applyWithFrameResult:(id)a0;
- (id)initWith;

@end
