@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCompositeTriggeringCondition : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSArray *_triggers;
    NSArray *_conditions;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void)addTrigger:(id)a0;
- (void)triggerFired:(id)a0;
- (void)addCondition:(id)a0;
- (void)dealloc;
- (id)objectForJSON;
- (void)addConditions:(id)a0;
- (BOOL)isTrue;
- (id).cxx_construct;
- (void)addTriggers:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 startState:(BOOL)a1;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2 triggers:(id)a3 conditions:(id)a4;
- (id)initWithName:(id)a0 startState:(BOOL)a1 triggers:(id)a2 conditions:(id)a3;

@end
