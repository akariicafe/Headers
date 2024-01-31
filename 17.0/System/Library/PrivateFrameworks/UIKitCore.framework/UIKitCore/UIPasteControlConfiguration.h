@class UIColor;

@interface UIPasteControlConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _shouldLayoutSynchronously;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *baseForegroundColor;
@property (retain, nonatomic) UIColor *baseBackgroundColor;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
