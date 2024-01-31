@class CKEntity, NSDate;

@interface CKBalloonChatItem : CKChatItem {
    CKEntity *_entity;
}

@property (readonly, nonatomic) char balloonOrientation;
@property (readonly, nonatomic) unsigned long long balloonCorners;
@property (readonly, nonatomic) char tailShape;
@property (readonly, nonatomic) char balloonShape;
@property (readonly, nonatomic) Class balloonViewClass;
@property (readonly, nonatomic) Class impactBalloonViewClass;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) BOOL shouldCacheSize;
@property (readonly, nonatomic) BOOL isBlackholed;
@property (readonly, nonatomic) BOOL isMultilineText;

+ (double)resultingMaxWidthWithBalloonMaxWidth:(double)a0 fullMaxWidth:(double)a1 transcriptTraitCollection:(id)a2;

- (id)sender;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (id)contact;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)description;
- (void).cxx_destruct;
- (id)cellIdentifier;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (BOOL)canBeSelectedInEditMode;
- (void)configureBalloonView:(id)a0;
- (BOOL)displayDuringSend;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptDrawerText;
- (BOOL)needsAdjustedTextAlignmentInsets;
- (BOOL)needsPreservedAspectRatio;
- (char)transcriptOrientation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transcriptTextAlignmentInsets;
- (BOOL)wantsDrawerLayout;

@end
