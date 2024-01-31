@class _NSTextAttachmentLayoutContext, NSTextAttachment, NSDictionary, NSTextAttachmentViewProvider, NSTextLayoutFragment;
@protocol NSTextLocation;

@interface _NSTextAttachmentLayoutInfo : NSObject {
    id<NSTextLocation> _location;
    long long _locationOffsetFromBase;
    NSTextAttachmentViewProvider *_textAttachmentViewProvider;
    NSTextLayoutFragment *_textLayoutFragment;
    struct __CTRunDelegate { } *_runDelegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _proposedLineFragment;
    double _baselineOffset;
    double _horizontalOffset;
    BOOL _isBoundsValid;
    BOOL _isLineFragmentLayout;
}

@property (readonly) _NSTextAttachmentLayoutContext *layoutContext;
@property (readonly) id<NSTextLocation> location;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly) NSTextAttachment *textAttachment;
@property (readonly) struct __CTRunDelegate { } *runDelegate;
@property (retain) NSTextAttachmentViewProvider *textAttachmentViewProvider;
@property struct CGPoint { double x0; double x1; } attachmentFrameOrigin;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resolvedAttachmentFrame;

- (id)textAttachmentViewProvider;
- (struct CGPoint { double x0; double x1; })attachmentFrameOrigin;
- (struct __CTRunDelegate { } *)runDelegate;
- (void)dealloc;
- (id)location;
- (void)_invalidateLocations;
- (void)setAttachmentFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_queryLayoutWithHorizontalOffset:(double)a0;
- (id)initWithContext:(id)a0 location:(id)a1 attributes:(id)a2;
- (id)textLayoutFragment;
- (void)setTextAttachmentViewProvider:(id)a0;
- (void)invalidateAttachmentMeasurements;
- (void)_queryLayout;

@end
