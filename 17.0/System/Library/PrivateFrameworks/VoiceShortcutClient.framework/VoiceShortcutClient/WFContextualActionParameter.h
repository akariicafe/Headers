@class NSString, WFDisambiguationCollectionFilter;
@protocol WFPropertyListObject;

@interface WFContextualActionParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *wfParameterKey;
@property (readonly, nonatomic) id<WFPropertyListObject> wfSerializedRepresentation;
@property (readonly, nonatomic, getter=isAskEachTime) BOOL askEachTime;
@property (readonly, copy, nonatomic) WFDisambiguationCollectionFilter *askEachTimeCollectionFilter;
@property (readonly, nonatomic, getter=isActionInput) BOOL actionInput;
@property (readonly, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *displayString;

- (unsigned long long)hash;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 wfSerializedRepresentation:(id)a3 askEachTime:(BOOL)a4 askEachTimeCollectionFilter:(id)a5 actionInput:(BOOL)a6;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 wfSerializedRepresentation:(id)a3;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 askEachTime:(BOOL)a3 askEachTimeCollectionFilter:(id)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 isActionInput:(BOOL)a3;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 askEachTime:(BOOL)a3;
- (id)initWithCoder:(id)a0;

@end
