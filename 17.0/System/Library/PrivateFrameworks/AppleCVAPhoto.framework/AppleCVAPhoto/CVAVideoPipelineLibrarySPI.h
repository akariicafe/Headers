@interface CVAVideoPipelineLibrarySPI : NSObject

+ (BOOL)updateRequestWithLiveData:(id)a0 mattingRequest:(id)a1 faceKitProcessOutput:(id)a2 error:(id *)a3;
+ (id)portraitRequestWithBackground:(id)a0 light:(id)a1 post:(id)a2 isTmpConfig:(BOOL)a3 error:(id *)a4;

@end
