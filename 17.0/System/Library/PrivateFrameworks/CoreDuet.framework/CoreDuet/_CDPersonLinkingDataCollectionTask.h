@class NSString, PersonLinkingLinkedPairEvent, NSObject;
@protocol OS_xpc_object;

@interface _CDPersonLinkingDataCollectionTask : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) NSString *file;
@property (retain, nonatomic) PersonLinkingLinkedPairEvent *event;

- (void)execute;
- (void).cxx_destruct;
- (id)eventFromDict:(id)a0;
- (id)eventFromFile:(id)a0;
- (id)initWithFile:(id)a0 activity:(id)a1;

@end
