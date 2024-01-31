@class NSNumber, NSString;

@interface SBTraitsZOrderStageComponent : NSObject <TRAPreferencesStageComponent>

@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)preferencesType;
- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;

@end
