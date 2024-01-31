@class NSUUID, PKDrawing, NSString, NSDate;

@interface AKSignature : NSObject <NSSecureCoding> {
    PKDrawing *_drawing;
    struct CGPath { } *_path;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _strokesBounds;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *uniqueID;
@property (retain) NSDate *creationDate;
@property double baselineOffset;
@property BOOL shouldPersist;
@property (readonly) struct CGPath { } *path;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pathBounds;
@property (readonly) PKDrawing *drawing;
@property long long descriptionTag;
@property (copy, nonatomic) NSString *customDescription;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;

- (id)init;
- (void)dealloc;
- (void)setPath:(struct CGPath { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initForTesting;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessibilityValue;
- (id)initWithDrawing:(id)a0 path:(struct CGPath { } *)a1 baselineOffset:(double)a2;
- (id)initWithDrawing:(id)a0 path:(struct CGPath { } *)a1 baselineOffset:(double)a2 creationDate:(id)a3;
- (id)initWithDrawing:(id)a0 path:(struct CGPath { } *)a1 baselineOffset:(double)a2 creationDate:(id)a3 descriptionTag:(long long)a4 customDescription:(id)a5;

@end
