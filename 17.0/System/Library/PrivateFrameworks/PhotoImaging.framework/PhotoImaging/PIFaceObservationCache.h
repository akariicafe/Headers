@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, NUFaceDetectionResult;

@interface PIFaceObservationCache : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    id<NUFaceDetectionResult> _result;
}

+ (id)faceRequestWithRequest:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)submit:(id)a0 response:(id /* block */)a1;
- (id)submitSynchronous:(id)a0 error:(out id *)a1;

@end
