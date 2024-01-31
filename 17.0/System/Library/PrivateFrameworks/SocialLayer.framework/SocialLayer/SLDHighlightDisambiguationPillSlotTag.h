@class NSNumber, NSString, SLPerson;

@interface SLDHighlightDisambiguationPillSlotTag : SLDSlotTag

@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSNumber *widthNumber;
@property (retain, nonatomic) SLPerson *sender;
@property (nonatomic) BOOL isGroupConversation;
@property (retain, nonatomic) NSString *groupDisplayName;
@property (retain, nonatomic) NSNumber *otherRecipientCount;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isFromMe) BOOL fromMe;

+ (id)tagForHighlightAttribution:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)initWithHighlightAttribution:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2;

@end
