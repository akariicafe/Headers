@class NSArray, NSDictionary, MTCallerSuppliedFields, NSMutableDictionary, MTPromise, NSMutableArray;

@interface MTMetricsData : MTObject

@property (retain, nonatomic) NSArray *registeredEventData;
@property (retain, nonatomic) NSDictionary *baseFields;
@property (retain, nonatomic) NSArray *additionalBaseData;
@property (retain, nonatomic) NSDictionary *eventSpecificFields;
@property (retain, nonatomic) NSArray *additionalEventData;
@property (retain, nonatomic) MTPromise *configBaseFields;
@property (retain, nonatomic) MTCallerSuppliedFields *callerSuppliedFields;
@property (retain, nonatomic) NSMutableArray *additionalData;
@property (retain, nonatomic) NSMutableDictionary *performanceData;
@property (retain, nonatomic) NSMutableArray *postProcessingBlocks;
@property (nonatomic) BOOL samplingEnabled;
@property (nonatomic, getter=isAnonymous, setter=setAnonymous:) BOOL anonymous;

- (void)addFields:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)toDictionary;
- (void)addFieldsWithPromise:(id)a0;
- (void)addFieldsWithDictionary:(id)a0;
- (id)recordEvent;
- (void)addPostProcessingBlock:(id /* block */)a0;
- (void)addPostProcessingBlocks:(id)a0;
- (void)cancelUnfinishedPromisedEventData;
- (id)composeFieldsMaps;
- (id)getAdditionalData;
- (id)getPostProcessingBlocks;
- (id)userAndClientIDFields;

@end
