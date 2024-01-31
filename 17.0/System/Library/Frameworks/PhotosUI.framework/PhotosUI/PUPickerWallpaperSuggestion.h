@interface PUPickerWallpaperSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ mode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldReverseSortOrder;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
