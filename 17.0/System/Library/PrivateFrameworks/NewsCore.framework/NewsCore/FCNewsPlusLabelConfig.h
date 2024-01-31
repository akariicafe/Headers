@class NSString;

@interface FCNewsPlusLabelConfig : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long toolTipDisplayQuiescenceInterval;
@property (readonly, nonatomic) int toolTipDisplayMaxCount;
@property (readonly, nonatomic) NSString *toolTipTitle;
@property (readonly, nonatomic) NSString *toolTipBody;
@property (readonly, nonatomic) NSString *toolTipAlternativeBodyForVoiceOver;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
