@class NSString, AVAudioFile, NSObject, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface SNAudioFileAnalyzer : NSObject {
    AVAudioFile *_audioFile;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _wasCancelled;
}

@property (readonly, nonatomic) NSString *detailedDescription;

- (void)removeAllRequests;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (void)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)cancelAnalysis;

@end
