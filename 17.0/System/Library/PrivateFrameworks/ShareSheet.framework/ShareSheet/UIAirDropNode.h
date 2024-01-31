@class NSUUID, NSString, SDSuggestionNode, SFProxyText;
@protocol SFPeopleSuggestion;

@interface UIAirDropNode : NSObject <NSSecureCoding, SHSheetPeopleSuggestionProxy> {
    _Atomic unsigned int _avatarImageSlotID;
    _Atomic unsigned int _transportImageSlotID;
    _Atomic unsigned int _mainLabelSlotID;
    _Atomic double _mainLabelSlotHeight;
    _Atomic unsigned int _bottomLabelSlotID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SDSuggestionNode *suggestionNode;
@property (retain, nonatomic) SFProxyText *displayName;
@property (retain, nonatomic) SFProxyText *subtitle;
@property (retain, nonatomic) id<SFPeopleSuggestion> peopleSuggestion;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (nonatomic) BOOL hasSquareImage;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL isMagicHead;
@property (nonatomic) long long selectionReason;
@property (readonly, nonatomic) unsigned int avatarImageSlotID;
@property (readonly, nonatomic) unsigned int transportImageSlotID;
@property (retain, nonatomic) NSString *suggestionReason;
@property (readonly, nonatomic) BOOL isTapToRadar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TTRAirDropNode;
+ (id)nodeWithIdentifier:(id)a0 displayName:(id)a1 subtitle:(id)a2 avatarImageSlotID:(unsigned int)a3 transportImageSlotID:(unsigned int)a4;
+ (id)nodeWithIdentifier:(id)a0 peopleSuggestion:(id)a1;
+ (id)nodeWithIdentifier:(id)a0 suggestionNode:(id)a1;

- (BOOL)load;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)mainLabelSlotID;
- (unsigned int)transportSlotID;
- (unsigned int)bottomLabelSlotID;
- (unsigned int)imageSlotID;
- (double)mainLabelSlotHeight;
- (void)setAvatarImageSlotID:(unsigned int)a0;
- (void)setBottomLabelSlotID:(unsigned int)a0;
- (void)setMainLabelSlotHeight:(double)a0;
- (void)setMainLabelSlotID:(unsigned int)a0;
- (void)setTransportImageSlotID:(unsigned int)a0;

@end
