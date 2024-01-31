@interface SNAudioBufferUtils : NSObject

+ (BOOL)validateHealthyAudioContainedInFloatAudioPCMBufferObject:(id)a0 error:(id *)a1;
+ (long long)advanceConsecutiveUnhealthyAudioBufferCounterFrom:(long long)a0 assessingNewFloatAudioBufferObject:(id)a1 error:(id *)a2;
+ (BOOL)audioPCMBufferObjectIsSilent:(id)a0;
+ (id /* block */)integrateInjectionIntoBufferHandler:(id /* block */)a0 format:(id)a1 queryInjectionPath:(id /* block */)a2;
+ (BOOL)isInfiniteValueContainedInFloatAudioBuffer:(const struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *)a0;
+ (BOOL)isInfiniteValueContainedInFloatAudioBufferList:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
+ (BOOL)isInfiniteValueContainedInFloatAudioPCMBufferObject:(id)a0;
+ (BOOL)isNaNContainedInFloatAudioBuffer:(const struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *)a0;
+ (BOOL)isNaNContainedInFloatAudioBufferList:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
+ (BOOL)isNaNContainedInFloatAudioPCMBufferObject:(id)a0;
+ (long long)monitorHealthOfAudioBuffersGivenUnhealthyBufferCounter:(long long)a0 newFloatAudioBufferObject:(id)a1 errorThresholdBufferCount:(long long)a2 errorHandler:(id /* block */)a3;
+ (BOOL)processBufferWithInjectionOperator:(id)a0 bufferHandler:(id /* block */)a1 audioBuffer:(id)a2 time:(id)a3 error:(id *)a4;
+ (BOOL)unencodedAudioBufferIsSilent:(const struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *)a0;
+ (BOOL)unencodedAudioBufferListIsSilent:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
+ (BOOL)validateAudioPCMBufferObjectIsNotSilent:(id)a0 error:(id *)a1;
+ (BOOL)validateNoInfiniteValueContainedInFloatAudioPCMBufferObject:(id)a0 error:(id *)a1;
+ (BOOL)validateNoNaNContainedInFloatAudioPCMBufferObject:(id)a0 error:(id *)a1;

- (id)init;

@end
