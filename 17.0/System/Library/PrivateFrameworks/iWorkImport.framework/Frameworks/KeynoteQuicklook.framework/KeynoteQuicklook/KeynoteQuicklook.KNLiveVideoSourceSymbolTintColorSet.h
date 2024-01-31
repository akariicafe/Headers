@class TSUColor;

@interface KeynoteQuicklook.KNLiveVideoSourceSymbolTintColorSet : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ storage;
}

@property (nonatomic, readonly) TSUColor *foregroundColor;
@property (nonatomic, readonly) TSUColor *backgroundGradientTopColor;
@property (nonatomic, readonly) TSUColor *backgroundGradientBottomColor;
@property (nonatomic, readonly) TSUColor *backgroundGradientSwatchOutlineColor;
@property (nonatomic, readonly) TSUColor *labelColor;
@property (nonatomic, readonly) TSUColor *secondaryLabelColor;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithForegroundColor:(id)a0 backgroundGradientTopColor:(id)a1 backgroundGradientBottomColor:(id)a2 backgroundGradientSwatchOutlineColor:(id)a3 labelColor:(id)a4 secondaryLabelColor:(id)a5;

@end
