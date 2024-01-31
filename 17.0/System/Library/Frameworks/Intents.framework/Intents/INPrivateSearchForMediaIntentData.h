@class NSString, NSArray, NSNumber, INPrivateMediaIntentData;

@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, copy, nonatomic) NSArray *internalSignals;
@property (readonly, copy, nonatomic) NSNumber *appInferred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_cacheableObjects;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAudioSearchResults:(id)a0;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2 appInferred:(id)a3;

@end
