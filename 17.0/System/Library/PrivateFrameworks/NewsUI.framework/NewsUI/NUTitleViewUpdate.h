@class NSString;

@interface NUTitleViewUpdate : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) unsigned long long styleType;
@property (nonatomic, getter=shouldCancelPendingUpdates) BOOL cancelPendingUpdates;
@property (nonatomic) double lingerTimeInterval;
@property (nonatomic, getter=shouldSpeakAccessibilityTitleWhenDisplayed) BOOL speakAccessibilityTitleWhenDisplayed;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (nonatomic) long long textAlignment;

- (id)init;
- (id)initWithText:(id)a0 styleType:(unsigned long long)a1 glyph:(id)a2;
- (id)initWithValue:(id)a0 valueType:(unsigned long long)a1 styleType:(unsigned long long)a2;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributedText:(id)a0 styleType:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0 styleType:(unsigned long long)a1;

@end
