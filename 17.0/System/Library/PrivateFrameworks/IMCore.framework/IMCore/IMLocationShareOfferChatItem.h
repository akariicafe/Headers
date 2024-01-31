@class NSString, IMHandle, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (readonly, nonatomic) long long offerState;
@property (readonly, nonatomic) BOOL actionableEclipsed;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 sender:(id)a1;
- (BOOL)_isActionableEclipsed;
- (void)_setActionableEclipsed:(BOOL)a0;

@end
