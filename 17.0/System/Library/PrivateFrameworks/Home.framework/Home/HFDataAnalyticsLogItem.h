@class NSString, NAIdentity;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItem : HFItem <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)fetchLog;
- (id)initWithMediaProfileContainer:(id)a0 name:(id)a1;
- (BOOL)isDisplayDisabled;

@end
