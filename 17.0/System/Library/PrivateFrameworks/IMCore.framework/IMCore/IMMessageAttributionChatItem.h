@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem

@property (readonly, copy, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic) long long attributionType;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL showsLearnMoreLink;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 attributionInfo:(id)a1 attributionType:(long long)a2 showsLearnMoreLink:(BOOL)a3 statusItemSequenceNumber:(unsigned long long)a4;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)a0;

@end
