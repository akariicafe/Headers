@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned int systemSoundID;

+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)a0 systemSoundID:(unsigned int)a1;
+ (id)type;

- (unsigned long long)_effectiveEventType;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)_effectiveSystemSoundID;

@end
