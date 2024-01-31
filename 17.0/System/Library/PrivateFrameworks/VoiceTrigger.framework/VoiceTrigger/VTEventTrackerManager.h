@class NSObject;
@protocol OS_dispatch_queue;

@interface VTEventTrackerManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)_contentsOfDirectoryAtURL:(id)a0 matchingPattern:(id)a1 includingPropertiesForKeys:(id)a2 error:(id *)a3;
- (id)_contentsOfDirectoryAtURL:(id)a0 matchingPattern:(id)a1 sortedByDateWithResourceKey:(id)a2 error:(id *)a3;
- (id)_dictionaryToJson:(id)a0;
- (id)_sortedURLsInDirectory:(id)a0 matchingPattern:(id)a1;
- (void)voiceTriggerEvent:(id /* block */)a0;

@end
