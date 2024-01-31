@class NSString;
@protocol PMLPlanProtocol;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol>

@property (readonly, nonatomic) id<PMLPlanProtocol> plan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlan:(id)a0;

@end
