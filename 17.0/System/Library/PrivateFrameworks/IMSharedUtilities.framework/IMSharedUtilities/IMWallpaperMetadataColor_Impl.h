@class NSDictionary;

@interface IMWallpaperMetadataColor_Impl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ redKey;
    void /* unknown type, empty encoding */ greenKey;
    void /* unknown type, empty encoding */ blueKey;
    void /* unknown type, empty encoding */ alphaKey;
    void /* unknown type, empty encoding */ red;
    void /* unknown type, empty encoding */ green;
    void /* unknown type, empty encoding */ blue;
    void /* unknown type, empty encoding */ alpha;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
