@class NSString, NSDictionary;

@interface IMWallpaperMetadata_Impl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fontNameKey;
    void /* unknown type, empty encoding */ fontSizeKey;
    void /* unknown type, empty encoding */ fontWeightKey;
    void /* unknown type, empty encoding */ fontColorKey;
    void /* unknown type, empty encoding */ isVerticalKey;
    void /* unknown type, empty encoding */ typeKey;
    void /* unknown type, empty encoding */ backgroundColorKey;
    void /* unknown type, empty encoding */ fontName;
    void /* unknown type, empty encoding */ type;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fontSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fontWeight;
@property (nonatomic, retain) void /* unknown type, empty encoding */ fontColor;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isVertical;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundColor;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 fontWeight:(double)a2 fontColor:(id)a3 isVertical:(BOOL)a4 type:(id)a5 backgroundColor:(id)a6;

@end
