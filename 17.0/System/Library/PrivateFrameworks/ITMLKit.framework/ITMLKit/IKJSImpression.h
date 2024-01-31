@class NSString, NSArray, NSMutableArray;

@interface IKJSImpression : IKJSObject <NSObject, IKJSImpression, _IKJSImpressionProxy, _IKJSImpression>

@property (copy, nonatomic) NSString *metricsTag;
@property (copy, nonatomic) NSString *metricsData;
@property (retain, nonatomic) NSMutableArray *mutableTimestamps;
@property (retain, nonatomic) NSMutableArray *mutableChildren;
@property (weak, nonatomic) IKJSImpression *parentImpression;
@property (nonatomic) long long indexInParent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *data;
@property (readonly, nonatomic) NSArray *timestamps;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) id parent;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) NSString *impressionQueueTag;

+ (id)impressionsMapForViewElements:(id)a0 appContext:(id)a1 timestamp:(long long)a2;
+ (id)impressionsMapForViewElements:(id)a0 appContext:(id)a1 timestamp:(long long)a2 existingImpressionsMap:(id)a3;

- (void)addTimestamp:(long long)a0;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (id)asPrivateIKJSImpression;
- (id)initWithAppContext:(id)a0 data:(id)a1 index:(unsigned long long)a2 queueTag:(id)a3;
- (void)linkReferences;

@end
