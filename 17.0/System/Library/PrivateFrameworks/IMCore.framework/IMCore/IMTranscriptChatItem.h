@class IMHandle, NSString, IMServiceImpl, NSDate, IMChatContext, NSAttributedString;

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem>

@property (copy, nonatomic, setter=_setGUID:) NSString *guid;
@property (copy, nonatomic) IMChatContext *chatContext;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *layoutGroupIdentifier;
@property (readonly, nonatomic) BOOL contiguousLoaded;
@property (readonly, nonatomic) unsigned char contiguousType;
@property (readonly, nonatomic) unsigned char attachmentContiguousType;
@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) BOOL wantsTail;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isContiguousLoaded;
- (void)_setAttachmentContiguousType:(unsigned char)a0;
- (void)_setContiguousLoaded:(BOOL)a0;
- (void)_setContiguousType:(unsigned char)a0;
- (BOOL)isAttachmentContiguousWithChatItem:(id)a0;
- (BOOL)isContiguousWithChatItem:(id)a0;

@end
