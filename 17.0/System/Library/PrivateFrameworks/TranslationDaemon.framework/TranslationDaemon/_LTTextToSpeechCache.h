@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _LTTextToSpeechCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cache;
}

- (void)clear;
- (id)init;
- (id)audioDataForKey:(id)a0;
- (void).cxx_destruct;
- (void)cacheAudioData:(id)a0 forKey:(id)a1;

@end
