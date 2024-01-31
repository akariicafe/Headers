@class NSDate, NSString, UIImage, NSAttributedString, NSOrderedSet, NSArray, ICTTTextEdit, ICAttributionViewConfigurationSharedState, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICAttributionViewConfiguration : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *loadDataQueue;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } associatedTextFrame;
@property (copy, nonatomic) NSAttributedString *attribution;
@property (retain, nonatomic) id attributionTextStorage;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDate *explicitTimestamp;
@property (copy, nonatomic) NSAttributedString *formattedTimestamp;
@property (retain, nonatomic) id formattedTimestampTextStorage;
@property (copy, nonatomic) UIImage *statusImage;
@property (retain, nonatomic) NSMutableArray *highlightConfigurations;
@property (readonly, nonatomic) NSString *attributionUserID;
@property (readonly, nonatomic) NSOrderedSet *userIDs;
@property (readonly, nonatomic) NSArray *unreadUserIDs;
@property (nonatomic) BOOL forceVisible;
@property (nonatomic, getter=isDataLoaded) BOOL dataLoaded;
@property (readonly, nonatomic) ICAttributionViewConfigurationSharedState *sharedState;
@property (readonly, nonatomic) NSArray *editGroups;
@property (readonly, nonatomic) ICTTTextEdit *textEdit;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } trimmedRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attributionFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } formattedTimestampFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } disclosureImageFrame;
@property (readonly, copy, nonatomic) UIImage *disclosureImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statusImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedFormattedTimestampFrame;
@property (nonatomic) double appliedHorizontalAdjustmentRatio;
@property (nonatomic) double preferredHighlightValue;
@property (nonatomic) BOOL forcesAttributionHidden;
@property (readonly, nonatomic) BOOL isAttributionHidden;
@property (nonatomic) BOOL forcesTimestampHidden;
@property (readonly, nonatomic) BOOL isTimestampHidden;
@property (readonly, nonatomic) BOOL isDisclosureImageHidden;
@property (readonly, nonatomic) BOOL isStatusImageHidden;
@property (nonatomic, getter=isPreview) BOOL preview;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (nonatomic, getter=isBlurred) BOOL blurred;
@property (readonly, nonatomic) NSArray *childConfigurations;
@property (weak, nonatomic) ICAttributionViewConfiguration *parentConfiguration;

- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadDataWithCompletion:(id /* block */)a0;
- (void)updateFrames;
- (void)updateTimestamp;
- (void)addEditGroup:(id)a0;
- (void)commonInitWithSharedState:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)drawStatusImageInContext:(struct CGContext { } *)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (id)editGroupForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasValidRange;
- (id)initWithSharedState:(id)a0 editGroups:(id)a1 parentConfiguration:(id)a2;
- (id)initWithSharedState:(id)a0 textEdit:(id)a1 parentConfiguration:(id)a2;
- (BOOL)isEqualToAttributionViewConfiguration:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setTrimmedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)synchronouslyLoadData;
- (void)updateAttribution;
- (void)updateAttributionTextStorage;
- (void)updateChildConfigurations;
- (void)updateFormattedTimestampTextStorage;
- (void)updateHighlightAlpha;
- (void)updateHighlightFrames;
- (void)updateStatusImage;
- (void)updateUnreadUserIDs;

@end
