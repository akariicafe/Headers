@class NSString;

@interface NotesEditor.PaperDocumentEngagementData : NSObject <ICPaperDocumentEngagementData> {
    void /* unknown type, empty encoding */ attachmentIdentifier;
    void /* unknown type, empty encoding */ startDisplayMode;
    void /* unknown type, empty encoding */ endDisplayMode;
    void /* unknown type, empty encoding */ unknownState;
    void /* unknown type, empty encoding */ smallState;
    void /* unknown type, empty encoding */ mediumState;
    void /* unknown type, empty encoding */ largeState;
}

@property (nonatomic, readonly) NSString *attachmentIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ hasActivity;
@property (nonatomic) void /* unknown type, empty encoding */ hasSmallStateUsage;
@property (nonatomic) void /* unknown type, empty encoding */ hasMediumStateUsage;
@property (nonatomic) void /* unknown type, empty encoding */ hasLargeStateUsage;
@property (nonatomic) void /* unknown type, empty encoding */ hasFullscreenStateUsage;
@property (nonatomic) void /* unknown type, empty encoding */ startPageCount;
@property (nonatomic) void /* unknown type, empty encoding */ endPageCount;
@property (nonatomic) void /* unknown type, empty encoding */ hasGestures;
@property (nonatomic) void /* unknown type, empty encoding */ hasScroll;
@property (nonatomic) void /* unknown type, empty encoding */ hasPagination;
@property (nonatomic) void /* unknown type, empty encoding */ hasPinchZoom;
@property (nonatomic) void /* unknown type, empty encoding */ hasPinchToExpandState;
@property (nonatomic) void /* unknown type, empty encoding */ hasCollabView;
@property (nonatomic) void /* unknown type, empty encoding */ hasCollabEdit;
@property (nonatomic, readonly) long long startState;
@property (nonatomic, readonly) long long endState;

- (id)init;
- (void)reset;
- (void).cxx_destruct;

@end
