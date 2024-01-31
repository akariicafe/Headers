@class NSArray, NSString, UIColor;

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem

@property (nonatomic) BOOL overrideBalloonOrientationForPhotoGrid;
@property (readonly, copy, nonatomic) NSArray *acknowledgments;
@property (readonly, nonatomic) long long latestAcknowledgmentType;
@property (readonly, nonatomic) long long fromMeAcknowledgmentType;
@property (readonly, nonatomic) BOOL includesFromMe;
@property (readonly, nonatomic) BOOL latestIsFromMe;
@property (readonly, nonatomic) BOOL includesMultiple;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char balloonOrientation;
@property (readonly, copy) NSString *acknowledgmentImageName;
@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly) Class balloonViewClass;

- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)isEqual:(id)a0;
- (id)_imAggregateAcknowledgmentChatItem;
- (id)associatedChatItemGUID;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (char)transcriptOrientation;

@end
