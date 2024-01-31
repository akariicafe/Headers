@class NSNumber;
@protocol HFHomeKitObject;

@interface HUIncludedContextItem : HFItem

@property (readonly, nonatomic) unsigned long long contextType;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (retain, nonatomic) NSNumber *overrideHiddenState;
@property (retain, nonatomic) NSNumber *overridePrimaryState;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHomeKitObject:(id)a0 contextType:(unsigned long long)a1;

@end
