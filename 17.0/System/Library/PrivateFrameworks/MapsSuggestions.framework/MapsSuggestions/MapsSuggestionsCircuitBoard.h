@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCircuitBoard : NSObject <MapsSuggestionsJSONable> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    struct _Config { NSArray *circuits; NSArray *triggers; NSArray *conditions; } _config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnectCondition:(id)a0 fromCircuit:(id)a1;
- (id)uniqueName;
- (id)nameForJSON;
- (id)init;
- (id)addTrigger:(id)a0;
- (id)addCondition:(id)a0;
- (void)awaitQueue;
- (id)objectForJSON;
- (void)disconnectTrigger:(id)a0 fromCircuit:(id)a1;
- (id)addAction:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectTrigger:(id)a0 toCircuit:(id)a1;
- (void)connectCondition:(id)a0 toCircuit:(id)a1;
- (id)addCircuit:(id)a0;

@end
