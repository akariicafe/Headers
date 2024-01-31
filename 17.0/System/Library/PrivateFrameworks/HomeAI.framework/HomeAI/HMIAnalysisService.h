@class NSString;

@interface HMIAnalysisService : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (BOOL)cancelRequest:(int)a0;
- (id)expectedClasses;
- (int)requestAnalysisForAssetData:(id)a0 withProperties:(id)a1 andCompletionHandler:(id /* block */)a2;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer { } *)a0 withProperties:(id)a1 andCompletionHandler:(id /* block */)a2;

@end
